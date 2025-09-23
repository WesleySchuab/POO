#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int* ptrx = &x;
    cout << " Endereço de X " << ptrx;
    cout << endl;
    cout << "O valor de X " << *ptrx;

    return 0;
}