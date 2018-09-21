#ifndef BUILDER_H
#define BUILDER_H
#include "bebida.h"
#include "postre.h"
#include "principal.h"
#include "entrada.h"
class Builder
{
public:
  //  Builder();
   // virtual ~Builder();
    virtual Entrada *getEntrada()=0;
    virtual Principal *getPrincipal()=0;
    virtual Bebida *getBebida()=0;
    virtual Postre *getPostre()=0;
};

#endif // BUILDER_H
