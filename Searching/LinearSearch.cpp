#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// int main(){

//     //slakhani style

//      int list[] = {1, 2, 3, 5, 2, 23, 54, 123};
//     // int cout
//     int index = -1
//     // int j = 0;
//     // while (index == -1 && j < count){
//     //     if(list[j] == value )
//     //     index =j;
//     //     else
//     //     j++;
//     // }
//     // return index;

//     //yaseer style
//     for(int i =0; i< count; i++){
//         if(list[i] == value){
//             index = i;
//             break;
//         }
            
//     }

//     return 0;
// }
// Function to perform Linear Search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) { 
        if (arr[i] == target) { // Check if the current element matches the target
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if target is not found
}
/**
int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Sample array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int target = 30; // Target element to search for

    int result = linearSearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
*/