//
#include <iostream>
class Skill{
    public:

    Skill(std::string name, std::string description, int specialty, int uses);
    Skill();
    std::string getName();
    std::string getDescription();
    int getTotalUses();
    int getSpecialty();
    void setName(std::string name);
    void setDescription(std::string description);
    void setTotalUses(int uses);
    bool setSpecialty(int specialty);

    private:
    
    std::string name;
    std::string description;
    int specialty;
    int uses;
};