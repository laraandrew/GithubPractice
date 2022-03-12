#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Person {
    public:
        int getAge(){return age;}
        string getSex(){return (age == 0) ? "male" : "female";}
        string ReturnFullFamilyLine(){
            stringstream str;
            str << familyLine.at(0).ToString() << " <-- dad ::: mom --> " << familyLine.at(1).ToString();

        }
        string ToString(){ return name;}
    private: 
        unsigned int age;
        string name;
        vector<Person> familyLine;
        unsigned int sex;
};