#include <iostream>
#include <string>
#include <vector>
#include "Square.h"

using namespace std;

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

int main(){
    vector<Square> list = { Square(3.0), Square (14.2), Square(14.6)};
    Square square = findMax(list);

    cout << "largest" << square.getSide();
    
}