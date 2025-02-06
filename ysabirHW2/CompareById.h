/********************************************
 * This class compares Student objects by ID.
 *
 * Author: Yaseer Sabir
 * Version: 2/12/2025
 *********************************************/

#ifndef COMPARE_BY_ID_H
#define COMPARE_BY_ID_H

#include "Student.h"

class CompareById
{
public:
    bool isLessThan(const Student &s1, const Student &s2) const
    {
        return s1.getId() < s2.getId();
    }
};

#endif // COMPARE_BY_ID_H
