#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
    public:
        int getAge(){return age;}
        string getSex(){return (age == 0) ? "male" : "female";}
        string ReturnFullFamilyLine(){
            
        }
    private: 
        unsigned int age;
        string name;
        vector<Person> familyLine;
        unsigned int sex;
};