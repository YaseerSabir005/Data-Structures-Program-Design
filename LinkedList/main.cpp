#include <iostream>
#include <vector>
#include "LinkedList.h"

using namespace std;

int main() {

    LinkedList myList;

    for (int i = 0; i < 10; i++) {
        myList.add (i);
    }

    cout << "Number of Items: " << myList.getCurrentSize() << endl;
    vector<int> myVector = myList.toVector();
    for (vector<int>::iterator itr = myVector.begin(); itr != myVector.end(); itr++) {
        cout << *itr << endl;
    }
    cout << "=========" << endl;
    myList.remove(8);

    myVector = myList.toVector();




    for (vector<int>::iterator itr = myVector.begin(); itr != myVector.end(); itr++) {
        cout << *itr << endl;
    }






}
