#ifndef COMIDA_CRIOLLA_H
#define COMIDA_CRIOLLA_H
#include "builder.h"
class Comida_criolla:public Builder
{
private:
    Entrada *e;
    Principal *p;
    Bebida *b;
    Postre *po;
public:
    Comida_criolla();
    ~Comida_criolla();
    Entrada *getEntrada();
    Principal *getPrincipal();
    Bebida *getBebida();
    Postre *getPostre();
};

#endif // COMIDA_CRIOLLA_H
