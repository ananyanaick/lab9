#include<iostream>
using namespace std;
void copy()
{ char arr[20],*q,*m,b[20];
    cout<<"\n Enter the data";
    cin>>arr;
    m=arr;
    q=b;
    while(*m!='\0')
    {    *q=*m;
        q++;
        m++;
        if (*m=='\0')
            *q='\0';
    }
    cout<<“\n printing the copied string \n";
    p=b;
    while(*p!='\0')
    {cout<<*p;p++;}
}
int main()
{
    copy();
    return 0;
}
