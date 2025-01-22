#include "Student.h"
#include <iostream>
using namespace std;

    string Student:: getName(){
        return this->name;
    }
    void Student:: setName(string name){
        this->name =name;
    }

    string Student::  getId(){
        return this->id;
    }

    void Student:: setId(string id){
        this->id = id;
    }
    
    int Student:: getCredHours(){
        return this->creditHours;
    }
    void Student:: setCredHours(int credHours){
        this->creditHours= credHours;
    }

    int Student::getQualPoints(){
        return this->qualityPoints;
    }

    void Student::setQualPoints(int qualPoints){
        this->qualityPoints=qualPoints;
    }

    float Student::getCalculatedGpa(){
        return this->getQualPoints()/this->getCredHours();
    }