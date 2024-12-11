#include <iostream>
using namespace ::std;

extern "C"
void hello(){
    cout << "Hello" << endl;
}

int main(){
    hello();
}