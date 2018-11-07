#include<iostream>
using namespace std;
int chr(char a[],char c)
{
    char *q;
    int n=0;
    q=a;
    while(*q!='\0')
    {
        if(*q==c)
            n++;
        q++;
    }
    return n;
}
int main()
{
    char a[15],c;
    int n;
    cout<<"\n Enter your data ";
    cin>>a;
    cout<<"\n Enter the character you want to search for: ";
    cin>>c;
    n=chr(a,c);
    cout<<"\n no of times "<<c<<" repeats in the string = "<<n;
    return 0;
}




