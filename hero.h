#include <string>
#include <iostream>
#include "./character.h"

using namespace::std;

class hero : public character {
    public:
        void setName(string name){
            charName = name;
        }
        string getName(){
            return charName;
        }
    protected:
        string charName;

};