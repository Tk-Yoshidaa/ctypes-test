#include <iostream>
#include <string>

using namespace ::std;

extern "C"
void hello()
{
    cout << "Hello" << endl;
}

extern "C"
void hello2(char * name)
{
    cout << "Hello " << name << " !" << endl;
}

extern "C"
void hello3(string & name)
{
    cout << "Hello " << name << " !" << endl;
}


extern "C"
void hello4(int n)
{
    cout << "Hello " << n << " !" << endl;
}

extern "C"
void hello5(int n, char * name)
{
    cout << "Hello ";
    for (int i = 0; i < n; ++i) cout << name[i];
    cout << " !" << endl;
}

int main()
{
    hello();
}