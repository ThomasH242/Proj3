//
#include "skill.hpp"
#include <iostream>
enum Specialty { ML , SOFTWARE , HARDWARE };
class Profemon{
    public:
    Profemon();
    Profemon(std::string name, double max_health, Specialty specialty);
    std::string getName();
    Specialty getSpecialty();
    int getLevel();
    double getMaxHealth();
    void setName(std::string name);
    void levelUp(int exp);
    bool learnSkill(int slot, Skill skill);
    void printProfemon(bool print_skills);
    
    private:

    std::string name;
    int level;
    int rexp;
    int exp;
    int health;
    Specialty specialty;
    Skill skill[3];
};