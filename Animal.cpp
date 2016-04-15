//
//  Animal.cpp
//  Mastery_CPP_Level1
//


#include "Animal.h"

Animal::Animal()
:var_public(1), var_private(2), var_protected(3)
{}

void Animal::setVar_private(int x)
{
    (this->var_private) = x;
}

int Animal::getVar_private()
{
    return (this->var_private);
}

void Animal::setVar_protected(int x)
{
    (this->var_protected) = x;
}

int Animal::getVar_protected()
{
    return (this->var_protected);
}