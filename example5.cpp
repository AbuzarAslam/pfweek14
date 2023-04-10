#include<iostream>
using namespace std;
void changeNumber(int &number)
{
    (number)++;
    cout << "In function..." << number <<endl;
}
main()
{
    int number=10;
    changeNumber(number);
    cout << "After function..." << number <<endl;
}   