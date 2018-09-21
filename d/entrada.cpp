#include "Entrada.h"

Entrada::Entrada(string d,string i)
{
    descri=d;
    ima=i;
}
Entrada::~Entrada(){

}
void Entrada::set_descripcion(string d){
    descri=d;
}
void Entrada::set_image(string i){
    ima=i;
}
string Entrada::get_descripcion(){
    return descri;
}
string Entrada::get_image(){
    return ima;
}
