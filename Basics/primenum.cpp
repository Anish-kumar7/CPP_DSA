#include<iostream>
using namespace std;

int main() {
    int n = 7;
    bool isPrime = true;

    for(int i=2; i<=n-1; i++) {     // instead of i<=n-1 we can take i*i this will also work 
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime == true) {
        cout << "prime no\n";

    }  else {
        cout << "non prime no\n";
    }
    return 0;

}