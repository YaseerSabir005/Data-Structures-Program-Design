/********************************************
 * This file implements the Student class methods.
 *
 * Author: Yaseer Sabir
 * Version: 2/12/2025
 *********************************************/

#include "Student.h"

// Constructor
Student::Student(int id, std::string lastName, std::string firstName)
    : id(id), lastName(lastName), firstName(firstName) {}

// Getter methods
std::string Student::getFirstName() const
{
    return firstName;
}

std::string Student::getLastName() const
{
    return lastName;
}

int Student::getId() const
{
    return id;
}
