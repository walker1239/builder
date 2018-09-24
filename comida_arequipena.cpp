#include "comida_arequipena.h"

Comida_arequipena::Comida_arequipena()
{
    e=new Entrada();
    p=new Principal();
    b=new Bebida();
    po=new Postre();
    e->set_descripcion("Esta es la entrada de comida arequipena");
    e->set_image("entrada1.png");
    p->set_descripcion("Esta es la principal de comida arequipena");
    p->set_image("principal1.png");
    b->set_descripcion("Esta es la bebida de comida arequipena");
    b->set_image("bebida1.png");
    po->set_descripcion("Esta es el postre de comida arequipena");
    po->set_image("postre1.png");
}

Entrada *Comida_arequipena::getEntrada()
{
    return e;
}

Principal *Comida_arequipena::getPrincipal()
{
    return p;
}
Bebida *Comida_arequipena::getBebida()
{
    return b;
}
Postre *Comida_arequipena::getPostre()
{
    return po;
}

