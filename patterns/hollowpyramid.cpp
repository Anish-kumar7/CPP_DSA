#include<iostream>
using namespace std;

int main() {

    int n = 4;

    // for top part 
    for(int i=0; i<n; i++) {

        // for space printing the logic is 
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }

        cout << "*";

        if(i !=0) {


            // for space printing in upper part after star is printted ( space > than star > space ) this will be logic 
             for(int j=0; j<2*i-1; j++) {
                cout << " ";
             }

             cout << "*";


        }
        cout << endl;

    }



    // for bottom part logic is 

    for(int i=0; i<n-i; i++) {

        // for space printing 
        for(int j=0; j<i+1; j++) {
            cout << " ";

        }
        cout << "*";

        if(i != n-2) {

            // for space printing 
            for(int j=0; j<2*(n-1)-5; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}