//
#include "profemon.hpp"
#include <iostream>
Profemon::Profemon(){
    name = "undefined";
}
Profemon::Profemon(std::string name, double max_health, Specialty specialty){
    Profemon::name = name;
    Profemon::level = 0;
    Profemon::rexp = 50;
    Profemon::exp = 0;
    Profemon::health = max_health;
    Profemon::specialty = specialty;
}
std::string Profemon::getName(){
    return name;
}
Specialty Profemon::getSpecialty(){
    return specialty;
}
int Profemon::getLevel(){
    return level;
}
double Profemon::getMaxHealth(){
    return health;
}
void Profemon::setName(std::string name){
    Profemon::name = name;
}
void Profemon::levelUp(int exp){
    Profemon::exp += exp;
    while(Profemon::exp >= rexp){
        if(specialty == ML){
            Profemon::exp -= rexp;
            rexp += 10;
            level++;
        }
        else if(specialty == SOFTWARE){
            Profemon::exp -= rexp;
            rexp += 15;
            level++;
        }
        else if(specialty == HARDWARE){
            Profemon::exp -= rexp;
            rexp += 20;
            level++;
        }
    }
}
bool Profemon::learnSkill(int slot, Skill skill){
    if(skill.getSpecialty() == Profemon::getSpecialty() && slot <= 2 && slot >= 0){
        if(Profemon::skill[slot].getName() != skill.getName()){
            Profemon::skill[slot] = skill;
            return true;
        }
        else{
            return false;
        }
    }
    return false;
}
void Profemon::printProfemon(bool print_skills){
    std::string special; 
    if(getSpecialty() == ML){
        special = "ML";
    }
    else if(getSpecialty() == SOFTWARE){
        special = "SOFTWARE";
    }
    else{
        special = "HARDWARE";
    }
    std::cout << getName() << " [" << special << "] | lvl " << getLevel() << " | exp " << exp << " / " << rexp << " | hp " << getMaxHealth() << std::endl << std::endl; 
    if(print_skills){
        std::cout << skill[0].getName() << " " << skill[0].getTotalUses() << " : " << skill[0].getDescription() << std::endl << std::endl;
        std::cout << skill[1].getName() << " " << skill[1].getTotalUses() << " : " << skill[1].getDescription() << std::endl << std::endl;
        std::cout << skill[2].getName() << " " << skill[2].getTotalUses() << " : " << skill[2].getDescription() << std::endl << std::endl;
    }
}       