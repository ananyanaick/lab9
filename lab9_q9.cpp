#include<iostream>
using namespace std;
int cmp()
{
    char a[30],b[30];
    cout<<"\n Enter the 1st string ";
    cin>>a;
    cout<<"\n Enter the 2nd string ";
    cin>>b;
    if (len(a)==len(b))
    {   char *m,*p;
        m=a;
        p=b;
        while(*m!='\0')
        {
            if (*m!=*p)
            {return 0;}
            m++;p++;
        }
        return 1;
    }    
    else 
        return 0;            
} 
int len(char a[])
{ 
    char *q;
    int i=0;
    q=a;
    while(*q!='\0')
    {
        i++;
        q++;
    }
    return i;
}

int main()
{
    int k;
    k=cmp();
    if (k==1)
        cout<<"\n Both the strings have equal string length.”;
        else 
            cout<<" \n Unequal string length";
    return 0;
}




