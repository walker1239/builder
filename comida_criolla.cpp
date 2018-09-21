#include "comida_criolla.h"

Comida_criolla::Comida_criolla()
{
}


Entrada *Comida_criolla::getEntrada()
{
    return new Entrada();
}

Principal *Comida_criolla::getPrincipal()
{
    return new Principal();
}
Bebida *Comida_criolla::getBebida()
{
    return new Bebida();
}
Postre *Comida_criolla::getPostre()
{
    return new Postre();
}
