#include "hero.h"
#include "monsters.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace::std;

int damageOutput;
int damageTaken;
int netDamage;
int enemyDef;
string mainCharacterName;
string enemyName;

int damageDealt(hero character, monster enemy) {
    damageOutput = character.doAttack();
    enemyDef = enemy.getDefense();
    damageTaken = damageOutput - enemyDef;
    return damageTaken;

}

int main(){
    hero mainChar;
    monster spider;
    

    mainChar.setAttack(5);
    mainChar.setDefense(3);
    mainChar.setHP(20);
    mainChar.setName("Jacob");

    spider.setAttack(3);
    spider.setDefense(2);
    spider.setHP(10);
    spider.setName("Aragog");

    mainCharacterName = mainChar.getName();
    enemyName = spider.getName();

    cout << mainCharacterName << "is battling " << enemyName << endl;
    cout << endl;
    cout << mainCharacterName << "attacks!" << endl;

    netDamage = damageDealt(mainChar, spider);

    spider.takeDamage(netDamage);

    cout << enemyName << " has taken " << netDamage << " damage!" << endl;

    return 0;

}