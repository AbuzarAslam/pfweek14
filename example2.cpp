#include<iostream>
using namespace std;
main()
{
    int number=10;
    int *p=&number;
    cout << "The address of variable is...." << p << endl;
    cout << "The value of variable is...." << *p << endl;
}