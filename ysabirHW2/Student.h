/********************************************
 * This file defines the Student class, which contains
 * firstName, lastName, and id attributes. It provides
 * constructors and getter methods.
 *
 * Author: Yaseer Sabir
 * Version: 2/12/2025
 *********************************************/

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
private:
    std::string firstName;
    std::string lastName;
    int id;

public:
    // Constructor
    Student(int id, std::string lastName, std::string firstName);

    // Getter methods
    std::string getFirstName() const;
    std::string getLastName() const;
    int getId() const;
};

#endif // STUDENT_H
