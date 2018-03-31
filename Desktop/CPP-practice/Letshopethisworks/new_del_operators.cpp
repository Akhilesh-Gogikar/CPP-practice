#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int *arr;
    int size;

    cout << "Enter the size of the integer array: ";
    cin >> size;

    cout<<"Creating an array of the size"<<size<<"..";
    arr = new int[size];

    cout<<"\n Dynamic allocation of memory for the array arr is successful";

    delete arr;
    getch();
    return 0;
}
