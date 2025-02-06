/********************************************
 * This program creates a list of hardcoded Student objects,
 * stores them in a vector, and finds the student
 * with the highest ID and last name using comparators.
 *
 * Author: Yaseer Sabir
 * Version: 2/12/2025
 *********************************************/

#include "Student.h"
#include "CompareById.h"
#include "CompareByName.h"
#include <iostream>
#include <vector>

using namespace std;

// Template function to find the maximum element based on a given comparator
template <typename Object, typename Comparator>
const Object &findMax(const vector<Object> &list, Comparator cmp)
{
    int MAX = 0;
    for (int i = 1; i < list.size(); i++)
    {
        if (cmp.isLessThan(list[MAX], list[i]))
        {
            MAX = i;
        }
    }
    return list[MAX];
}

int main()
{
    // Hardcoded Student data
    vector<Student> students = {
        {79, "Sanders", "Bernie"},
        {78, "Bloomberg", "Mike"},
        {74, "Trump", "Donald"},
        {71, "Warren", "Elizabeth"},
        {69, "Holder", "Eric"},
        {66, "Inslee", "Jay"},
        {59, "Hickenlooper", "John"},
        {99, "Brown", "Sherrod"},
        {45, "Schulz", "Howrad"},
        {77, "McAuliffe", "Terry"},
        {60, "Klobuchar", "Amy"},
        {59, "DeBlasio", "Bill"},
        {57, "Delaney", "John"},
        {56, "Harris", "Kamala"},
        {53, "Gillibrand", "Kirsten"},
        {51, "Booker", "Cory"},
        {48, "O'Rourke", "Beto"},
        {39, "Gabbard", "Tulsi"},
        {38, "Buttigieg", "Pete"}};

    // Display all students
    cout << "Students list:\n";
    for (const auto &student : students)
    {
        cout << student.getId() << " " << student.getLastName() << " " << student.getFirstName() << endl;
    }

    // Find student with the highest ID
    CompareById compareById;
    const Student &maxIdStudent = findMax(students, compareById);
    cout << "\nStudent with the largest ID:\n";
    cout << maxIdStudent.getId() << " " << maxIdStudent.getLastName() << " " << maxIdStudent.getFirstName() << endl;

    // Find student with the highest lastName/firstName combination
    CompareByName compareByName;
    const Student &maxNameStudent = findMax(students, compareByName);
    cout << "\nStudent with the largest name:\n";
    cout << maxNameStudent.getId() << " " << maxNameStudent.getLastName() << " " << maxNameStudent.getFirstName() << endl;

    return 0;
}
