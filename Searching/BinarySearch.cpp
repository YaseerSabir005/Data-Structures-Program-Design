#include <iostream>
using namespace std;
    int binarySearch(int arr[], int size, int target){
        int left = 0; int right = size-1; 

        while(left <= right){
            int mid = (left + right)/2; // prevents integer overflow
            
            if(arr[mid] == target)
                return mid;
            else if(arr[mid] < target)
                left = mid +1; //search in right half
            else
                right = mid -1; // search in left half
        }
        return -1;   
    }

    int main(){
        int arr[] = {12, 33, 54, 23, 76, 88};
        int size = sizeof(arr)/sizeof(arr[0]);
        int target = 726;

        int result = binarySearch(arr,size, target);

        if(result != -1)
            cout << "Element found at index " << result << endl;
        else
            cout << "Element not found " << endl;
    }