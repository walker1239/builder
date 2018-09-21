#include "comida_arequipena.h"

Comida_arequipena::Comida_arequipena()
{

}

Entrada *Comida_arequipena::getEntrada()
{
    return new Entrada();
}

Principal *Comida_arequipena::getPrincipal()
{
    return new Principal();
}
Bebida *Comida_arequipena::getBebida()
{
    return new Bebida();
}
Postre *Comida_arequipena::getPostre()
{
    return new Postre();
}

