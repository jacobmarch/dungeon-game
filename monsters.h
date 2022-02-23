#include <string>
#include <iostream>
#include "./character.h"

using namespace::std;
class monster : public character {
    public:
        string getName(){
            return monsterName;
        }
        void setName(string name){
            monsterName = name;
        }
        string getType(){
            if(monsterType == 1){
                return "Fire";
            }
            else if(monsterType == 2){
                return "Earth";
            }
            else if(monsterType == 3){
                return "Water";
            }
        }
        void setType(int type){
            monsterType = type;

        }
    protected:
        string monsterName;
        int monsterType;
};