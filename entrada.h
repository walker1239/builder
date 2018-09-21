#ifndef ENTRADA_H
#define ENTRADA_H
#include <iostream>
#include<string>
using namespace std;


class Entrada
{
private:
    string descri;
    string ima;

public:
    Entrada(string ima="",string descri="");
    ~Entrada();
    void set_descripcion(string descri);
    void set_image(string ima);
    string get_descripcion();
    string get_image();
};

#endif // ENTRADA_H
