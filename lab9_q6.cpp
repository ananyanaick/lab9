#include<iostream>
using namespace std;
int main()
{
    char arr[20],*p,*q;
    int i=0;
    cout<<"\n Enter a String ";
    cin>>arr;
    while(arr[i]!='\0')
        i++;
    q=&arr[i-1];
    while(*q!=a[0])
    {    
        p=q;
        while(*p!='\0')
        {
            cout<<" , ”<<*p;
            p++;
        }
        cout<<endl;
        q--;
    }
    while(*q!='\0')
    {cout<<" , ”<<*q;
        q++;}
    return 0;
}
