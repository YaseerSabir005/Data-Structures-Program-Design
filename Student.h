#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student {
    
    private:
    string name;
    string id;
    int creditHours;
    int qualityPoints;

    public:
    string getName();
    void setName(string name);

    string getId();
    void setId(string id);
    
    int getCredHours();
    void setCredHours(int creditHours);

    int getQualPoints();
    void setQualPoints(int qualPoints);

    float getCalculatedGpa();

};
#endif