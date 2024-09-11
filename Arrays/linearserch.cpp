#include<iostream>
using namespace std;

int linearSerch(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) { // target found 
            return i;
        }
    }
    return -1;  // target not found 
}
int main() {
    int arr[] = {4, 5, 6, 7, 8, 9, 10};
    int size = 7;
    int target = 9;
    ;

    cout << linearSerch(arr, size, target) << endl;
    return 0;
}