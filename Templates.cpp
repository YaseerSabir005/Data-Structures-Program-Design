#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
 * Return the maximum item in array a.
 * Assumes a.size() > 0
 * Comparable objects must provide <
 */
template <typename Comparable>
const Comparable &findMax(const vector<Comparable> &a)
{
    int maxIndex = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[maxIndex] < a[i])
            maxIndex = i;
    }
    return a[maxIndex];
}

int main()
{
    vector<int> list1 = {1, 5, 2, 3, 4, 5, 2, 3, 4, 2, 9, 10, -2};
    int max1 = findMax(list1);

    vector<float> list2 = {1.2, 2.3, 2.23, 2.3, 9.3, 293.3, -392.3, 3.23};
    float max2 = findMax(list2);

    vector<string> list3 = {"yes", "yessss", "Yaseerrrrrrrr", "yessir"};
    string max3 = findMax(list3);

    cout << "Max value is" << max1;
    cout << "Max value is " << max2;
    cout << "Max value of strings are " << max3;
}
