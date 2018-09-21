#ifndef COMIDA_H
#define COMIDA_H

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
};

#endif // COMIDA_H
