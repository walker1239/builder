#include "comida.h"

Comida::Comida()
{
    e=nullptr;
    pri=nullptr;
    b=nullptr;
    pos=nullptr;

}

void Comida::set_Entrada(Entrada *entra)
{
    e=entra;
}
void Comida::set_Principal(Principal *princi)
{
    pri=princi;
}
void Comida::set_Bebida(Bebida *bebi)
{
    b=bebi;
}
void Comida::set_Postre(Postre *postr)
{
    pos=postr;
}
Entrada* Comida::get_Entrada()
{
    return e;
}
Principal* Comida::get_Principal()
{
    return pri;
}
Bebida* Comida::get_Bebida()
{
    return b;
}
Postre* Comida::get_Postre()
{
    return pos;
}
