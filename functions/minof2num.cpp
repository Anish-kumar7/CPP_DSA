#include<iostream>
using namespace std;

// min of 2 number 

int minOfTwo(int a, int b) {  // these values are parameter 
    if(a < b) {
        return a;
    } else {
        return b;
    }

}
int main() {
    cout << "min = " <<  minOfTwo(500, 300) << endl;     // these value are called arguments 

    return 0;

}