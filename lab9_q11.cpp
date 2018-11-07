#include<iostream>
using namespace std;
int length(char a[])
{ 
    char *p;
    int i=0;
    p=a;
    while(*p!='\0')
    {i++;p++;}
    return i;
}
int main()
