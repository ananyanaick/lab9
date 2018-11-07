#include<iostream>
using namespace std;
void cat()
{
    char a[25],b[25],*m,*n;
    cout<<"\n Enter the 1st line \n ”;
    cin>>a;
    cout<<"\n Enter the 2nd line \n ";
    cin>>b;
    n=b;
    m=a;
    while(*m!='\0')
        m++;
    while(*n!='\0')
    {     *m=*n;
        n++;
        m++;
        if (*n=='\0')
            *m='\0';
    }
    m=a;
    cout<<"\n concatenated string is ";
    while(*m!='\0')
    {
        cout<<*m;
        m++;
    }
    
}
int main()
{
    cat();
    return 0;
}
