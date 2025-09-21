#include <iostream>
using namespace std;

void analyze_pointer(int *ptr)
{
    cout << "The memory location that the pointer points to is: " << ptr << endl;
    cout << "The value of the integer being pointed to is: " << *ptr << endl;
}

int main()
{
    int iValue = 8;
    analyze_pointer(&iValue);

    int *iValuepointer = new int;
    *iValuepointer = 9;
    analyze_pointer(iValuepointer);
}