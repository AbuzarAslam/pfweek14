#include<iostream>
using namespace std;
void passingToArray(int array[],int size)
{
    for(int i=0;i<=size;i++)
    {
        cout << array[i] << " ";
    }
}
main()
{
    int size=3;
    int number[size]={1,2,3};
    passingToArray(number,size);

}   