#include <iostream>
#include <string>

using namespace ::std;

extern "C"
void hello()
{
    cout << "Hello" << endl;
}

extern "C"
void hello2(char ** name)
{
    cout << "Hello " << name << " !" << endl;
}

extern "C"
void hello3(string & name)
{
    cout << "Hello " << name << " !" << endl;
}


extern "C"
void hellon(int n)
{
    cout << "Hello " << n << " !" << endl;
}


int main()
{
    hello();
}