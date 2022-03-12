#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Person {
    public:
        int getAge(){return age;}
        string getSex(){return (age == 0) ? "female" : "male";}
        string ReturnFullFamilyLine(){
            stringstream str;
            str << familyLine.at(0).ToString() << " <-- dad ::: mom --> " << familyLine.at(1).ToString() << endl;
            str << name << endl;
            return str.str();
        }
        string ToString(){ return name;}
    
    private: 
        unsigned int age;
        string name;
        vector<Person> familyLine;
        unsigned int sex; // 1 is male 0 is female
};