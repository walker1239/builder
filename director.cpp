#include "director.h"

Director::Director()
{
    build=nullptr;
}
void Director::set_builder(Builder *builder)
{
    build=builder;
}
Comida* Director::get_comida()
{
    Comida* c=new Comida();
    c->set_Entrada(build->getEntrada());
    c->set_Principal(build->getPrincipal());
    c->set_Bebida(build->getBebida());
    c->set_Postre(build->getPostre());
    return c;
}
