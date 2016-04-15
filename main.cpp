//
//  main.cpp
//  Mastery_CPP_Level1
//

#include "Header.h"

int main(int argc, const char * argv[]) {
    
    //myDemo();
    dynamicDemo();
    return 0;
}

void myDemo()
{
    
    Animal animal;
    cout <<"\n"<< animal.var_public <<", "<<animal.getVar_private()<<", "<<animal.getVar_protected()<<"\n"<< endl;
    
    Cat cat;
    cout << animal.var_public <<", "<<animal.getVar_private()<<", "<<animal.getVar_protected()<<"\n\n\n"<< endl;
    
    
    animal.var_public = 10;
    cout << animal.var_public <<", "<<animal.getVar_private()<<", "<<animal.getVar_protected()<<"\n"<< endl;
    
    //cat.var_protected = 30;
    
    cat.setVar_private(20);
    cat.setVar_protected(30);
    
    cout << animal.var_public <<", "<<animal.getVar_private()<<", "<<animal.getVar_protected()<<"\n"<< endl;
    cout << cat.getVar_private()<<", "<<cat.getVar_protected()<<"\n"<< endl;

    //*/
}

struct DynamicClass
{
    private:
        string input;
    
    public:
        void setInput(string s){ input = s; }
        string getInput(){ return input; }
};

void dynamicDemo()
{
    int count=0;
    string temp;
    DynamicClass* pointer_dynamic = NULL;
    
    while(true)
    {
        cout << "Add object: " <<endl;
        
        DynamicClass object_dynamic;
        
        getline(cin,temp);
        object_dynamic.setInput(temp);
        
        //(exit)
        if(object_dynamic.getInput() == "") break;
        
        //allocate memory
        if(pointer_dynamic == NULL)                         //check if empty
        {
            pointer_dynamic = new DynamicClass[1];          //declare memory for one location
            pointer_dynamic[0] = object_dynamic;            //add temp object 'dynamic_object' to memory location
            count++;                                        //increment count to keep track of size of array
        }
        else                                                //else array has elements already
        {
            DynamicClass* temp_pointer = pointer_dynamic;   //store pointer_dynamic address in temp_pointer - saves a reference to original pointer
            pointer_dynamic = new DynamicClass[count+1];    //increase size
            
            for(int i=0; i<count; i++)
                pointer_dynamic[i] = temp_pointer[i];       //loop through old array(temp now) and add to new array with more memory
            
            pointer_dynamic[count] = object_dynamic;        //add the object, that has the input from user, to end of new array
            count++;
        }
    }
    
    for(int i=0; i<count;i++)
        cout << pointer_dynamic[i].getInput() << endl;
   
    cout<<"\n\n"<<endl;
}



