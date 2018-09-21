#ifndef POSTRE_H
#define POSTRE_H
#include <iostream>
#include<string>
using namespace std;

class Postre
{
private:
    string descri;
    string ima;

public:
    Postre(string ima="",string descri="");
    ~Postre();
    void set_descripcion(string descri);
    void set_image(string ima);
    string get_descripcion();
    string get_image();
};

#endif // POSTRE_H
