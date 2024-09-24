#include <iostream>
#include <vector>
using namespace std;

void changeA(int* ptr) { // pass by reference using pointer
    *ptr = 20;

}

int main() {
    int a = 10;
    changeA(&a);

    cout << "inside main fxn : " << a << endl;
    return 0;
}