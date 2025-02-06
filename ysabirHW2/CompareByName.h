/********************************************
 * This class compares Student objects by
 * lastName/firstName combination.
 *
 * Author: Yaseer Sabir
 * Version: 2/12/2025
 *********************************************/

#ifndef COMPARE_BY_NAME_H
#define COMPARE_BY_NAME_H

#include "Student.h"

class CompareByName
{
public:
    bool isLessThan(const Student &s1, const Student &s2) const
    {
        if (s1.getLastName() == s2.getLastName())
        {
            return s1.getFirstName() < s2.getFirstName();
        }
        return s1.getLastName() < s2.getLastName();
    }
};

#endif // COMPARE_BY_NAME_H
