//include the library
#include<iostream>
using namespace std;
//main function
int main()
{
    int c,d,*q;
    //intialising the pointer to a null value
    q=0;
    c=2;
    d=3;
    cout<<"\n the intial values are:  ";
    cout<<"\nc = "<<c<<"  d = "<<d;
    q=&c; //pointing pointer to c
    //value stored to d
    d=*q;
    
    cout<<"\n the final values are:  ";
    cout<<"\nc = "<<c<<"  d = "<<d<<endl;
    return 0;
}
