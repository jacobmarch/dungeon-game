#include <iostream>

using namespace::std;

class character {
    public:
        void setHP(int health){
            hp = health;
        }
        void setAttack(int attack){
            attk = attack;
        }
        void setDefense(int defense){
            def = defense;
        }
        int doAttack(int modifier = 0){
            damage = attk + modifier + (rand() % 3 + 1);
            return damage;
        }
        int getHP(){
            return hp;
        }
        int getAttack(){
            return attk;
        }
        int getDefense(){
            return def;
        }
        void takeDamage(int dmg){
            hp = hp - dmg;
        }
    protected:
        int hp;
        int attk;
        int def;
        int damage;

};