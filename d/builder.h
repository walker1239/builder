#ifndef BUILDER_H
#define BUILDER_H

class Builder
{
public:
  //  Builder();
    virtual Entrada *getEntrada()=0;
    virtual Principal *getPrincipal()=0;
    virtual Bebida *getBebida()=0;
    virtual Postre *getPostre()=0;
};

#endif // BUILDER_H
