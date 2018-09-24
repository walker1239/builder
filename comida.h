#ifndef COMIDA_H
#define COMIDA_H
#include "bebida.h"
#include "postre.h"
#include "principal.h"
#include "entrada.h"
class Comida
{
private:
    Entrada *e;
    Principal *pri;
    Bebida *b;
    Postre *pos;

public:

    Comida();
    ~Comida();
    void set_Entrada(Entrada *entra);
    void set_Principal(Principal *princi);
    void set_Bebida(Bebida *bebi);
    void set_Postre(Postre *postr);
    Entrada* get_Entrada();
    Principal* get_Principal();
    Bebida* get_Bebida();
    Postre* get_Postre();
};

#endif // COMIDA_H
