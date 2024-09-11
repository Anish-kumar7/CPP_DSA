#include<iostream>
using namespace std;

int main() {
    int nums[] = {2, 4, 5, 6, 7, 8};
    int size = 6;

    int smallest = INT_MAX;

    for(int i=0; i<size; i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];

            // 11 ,12 line can be written as   smallest = min(nums[i], smallest);
        }
    }

    cout << "smallest = " << smallest << endl;
    return 0;
}