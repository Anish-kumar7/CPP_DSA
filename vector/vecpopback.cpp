#include<iostream>
#include<vector>
using namespace  std;

int main() {
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << "after push back size = " << vec.size() << endl;
     
     vec.pop_back(); // 45

    for(int val : vec) { // for each loop
    cout << val << endl;
    }

   
    return 0;
}