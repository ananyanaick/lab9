#include<iostream>
using namespace std;

int main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1};//initialisation and declaration of array
    int *p;
    cout<<"\n Printing the array elements without pointers\n”;
    //normal index method
    for(int i=0;i<10;i++)
        cout<<" , "<<a[i];
    cout<<"\n Printing array elements using pointers\n";
    p=a;
    //pointer method
    for(int i=0;i<10;i++)
    {    cout<<“ , "<<*p;
        p++;
    }
    return 0;
}
