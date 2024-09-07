#include<iostream>
using namespace std;
int main() {
    int n = 50;
    int oddSum = 0;
    for(int i=1; i<=n; i++) {
        if(i%2 != 0) {
            oddSum += 1;
        }
    }

    cout << "odd sum = " << oddSum << endl;
    return 0;

}