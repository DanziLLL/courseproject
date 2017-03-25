#ifndef PASSGEN_H
#define PASSGEN_H
#include <ctime>
#include <cstdlib>
#include <QDebug>
#include <QVector>

class passgen
{
private:
    QVector<QString> passlist;
    int quantity;
    int len;
    long int seed;
    void generate(int n);
public:
    passgen(int q, int l);
    void init();
    void getPassFromList(int n);
};

#endif // PASSGEN_H
