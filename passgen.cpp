#include "passgen.h"

void passgen::init()
{
    int i;
    for (i = 0; i < this->quantity; i++) {
        this->generate(i);
    }
}

passgen::passgen(int q, int l)
{
    quantity = q;
    len = l;
    seed = time(0) * 1000 - rand() % 1000;
}

void passgen::generate(int n)
{
    QString p;
    int i;
    for (i = 0; i < this->len; i++) {
        p.append((QChar)(char)(seed % rand() % 92 + 33));
    }
    passlist.push_back(p);
}

QString passgen::getPassFromList(int n)
{
    return this->passlist.at(n);
}
