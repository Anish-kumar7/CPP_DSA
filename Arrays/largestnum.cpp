#include<iostream>
using namespace std;

int main() {
    int nums[] = {2, 4, 5, 7, 8, 9};
    int size = 6;
    int largest = INT_MIN;
    for(int i=0; i<size; i++) {
        largest = max(nums[i], largest);
    }

    cout << "largest = " << largest << endl;
}