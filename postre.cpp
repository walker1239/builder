#include "postre.h"

Postre::Postre(string d,string i)
{
    descri=d;
    ima=i;
}
Postre::~Postre(){

}
void Postre::set_descripcion(string d){
    descri=d;
}
void Postre::set_image(string i){
    ima=i;
}
string Postre::get_descripcion(){
    return descri;
}
string Postre::get_image(){
    return ima;
}
