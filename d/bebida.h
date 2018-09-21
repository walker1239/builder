#ifndef BEBIDA_H
#define BEBIDA_H
#include <iostream>
#include<string>
using namespace std;


class Bebida
{
private:
    string descri;
    string ima;

public:
    Bebida(string ima="",string descri="");
    ~Bebida();
    void set_descripcion(string descri);
    void set_image(string ima);
    string get_descripcion();
    string get_image();
};

#endif // Bebida_H
