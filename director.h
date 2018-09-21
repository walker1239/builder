#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "builder.h"
#include "comida.h"

class Director
{
private:
    Builder* build;
public:
    Director();
    void set_builder(Builder *builder);
    Comida* get_comida();
};

#endif // DIRECTOR_H
