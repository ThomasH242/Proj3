//
#include "skill.hpp"
#include <iostream>
//  SKILLS
Skill::Skill(){
    name = "undefined";
    description = "undefined";
    uses = -1;
    specialty = -1;
}

Skill::Skill(std::string name, std::string description, int specialty, int usses){
    Skill::name = name;
    Skill::description = description;
    Skill::specialty = specialty;
    Skill::uses = usses;
}
std::string Skill::getName(){
    return name;
}
std::string Skill::getDescription(){
    return description;
}
int Skill::getTotalUses(){
    return uses;
}
int Skill::getSpecialty(){
    return specialty;
}
void Skill::setName(std::string name){
    Skill::name = name;
}
void Skill::setDescription(std::string description){
    Skill::description = description;
}
void Skill::setTotalUses(int uses){
    Skill::uses = uses;
}
bool Skill::setSpecialty(int specialty){
    if(specialty >= 0 && specialty <= 2){
        Skill::specialty = specialty;
        return true;
    }
    else{
        return false;
    }
}
//PROFEMON