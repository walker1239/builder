#ifndef COMIDA_AREQUIPENA_H
#define COMIDA_AREQUIPENA_H
#include "builder.h"
class Comida_arequipena:public Builder
{
private:
    Entrada *e;
    Principal *p;
    Bebida *b;
    Postre *po;
public:
    Comida_arequipena();
    Entrada *getEntrada();
    Principal *getPrincipal();
    Bebida *getBebida();
    Postre *getPostre();

};

#endif // COMIDA_AREQUIPENA_H
