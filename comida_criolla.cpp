#include "comida_criolla.h"

Comida_criolla::Comida_criolla()
{
    e=new Entrada();
    p=new Principal();
    b=new Bebida();
    po=new Postre();
    e->set_descripcion("Esta es la entrada de comida criolla");
    e->set_image("entrada2.png");
    p->set_descripcion("Esta es la principal de comida criolla");
    p->set_image("principal2.png");
    b->set_descripcion("Esta es la bebida de comida criolla");
    b->set_image("bebida2.png");
    po->set_descripcion("Esta es el postre de comida criolla");
    po->set_image("postre2.png");
}


Entrada *Comida_criolla::getEntrada()
{
    return e;
}

Principal *Comida_criolla::getPrincipal()
{
    return p;
}
Bebida *Comida_criolla::getBebida()
{
    return b;
}
Postre *Comida_criolla::getPostre()
{
    return po;
}
