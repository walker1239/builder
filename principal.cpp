#include "principal.h"

Principal::Principal(string d,string i)
{
    descri=d;
    ima=i;
}
Principal::~Principal(){

}
void Principal::set_descripcion(string d){
    descri=d;
}
void Principal::set_image(string i){
    ima=i;
}
string Principal::get_descripcion(){
    return descri;
}
string Principal::get_image(){
    return ima;
}
