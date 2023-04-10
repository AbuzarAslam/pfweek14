#include<iostream>
using namespace std;
int FindZero(int array[][3],int size)
{
    int count=0;
    int m;
    int j;
    for(m=0;m<size;m++)
    {
        for(j=0;j<3;j++)
        {
            if(array[m][j]==0)
            {
                count = count + 1;
            }
        }
    }
    return count;
}
main()
{
    int size=3;
    int number[size][3]={{1,2,3},
    {5,6,0},
    {0,0,0}
    };
    int count = FindZero(number,size);
    if(count>(size*3/2))
    {
        cout << "It is sparse" << endl;
    }
    else
    {
        cout << "Not sparse"<<endl;
    }
}   