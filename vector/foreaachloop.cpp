#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<char> vec;

    vec.push('a');
    vec.push('b');
    vec.push('c');
    vec.push('d');
    vec.push('e');

    // for(char val : vec) {
    //     cout << val << endl;

    // }
    for(int i=0; i<4; i++){
        cout<<vec[i]<<endl;
    }

    return 0;
}
