#include "bebida.h"

Bebida::Bebida(string d,string i)
{
    descri=d;
    ima=i;
}
Bebida::~Bebida(){

}
void Bebida::set_descripcion(string d){
    descri=d;
}
void Bebida::set_image(string i){
    ima=i;
}
string Bebida::get_descripcion(){
    return descri;
}
string Bebida::get_image(){
    return ima;
}
