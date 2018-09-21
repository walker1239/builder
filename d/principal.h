#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include <iostream>
#include<string>
using namespace std;

class Principal
{
private:
    string descri;
    string ima;

public:
    Principal(string ima="",string descri="");
    ~Principal();
    void set_descripcion(string descri);
    void set_image(string ima);
    string get_descripcion();
    string get_image();
};

#endif // PRINCIPAL_H
