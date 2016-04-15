//
//  Animal.h
//  Mastery_CPP_Level1
//

#ifndef Animal_h
#define Animal_h

#include <iostream>
using namespace std;

class Animal
{
    public:
        Animal();
        int var_public;
    
        int getVar_private();
        void setVar_private(int);
        int getVar_protected();
        void setVar_protected(int);
    
    private:
        int var_private;
    
    protected:
        int var_protected;
};

#endif /* Animal_h */
