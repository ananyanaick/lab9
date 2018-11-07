#include<iostream>
using namespace std;
int main()
{
    int a,*a1;char b,*b1;float c,*c1;double d,*d1;bool f,*f1;
    a=1;b=‘b';f=3.1415;d=3.141592;b=0;
    a1=&a; b1=&b; c1=&c; d1=&d; f1=&f;
    cout<<"\n Size of bool variable and pointer "<<sizeof(f)<<" “<<sizeof(f1);
    cout<<"\n Sizes character variable and pointer "<<sizeof(b)<<" “<<sizeof(b1);
    cout<<"\n Sizes integer variable and pointer "<<sizeof(a)<<" “<<sizeof(a1);
    cout<<"\n Sizes floating point variable and pointer "<<sizeof(c)<<" "<<sizeof(c1);
    cout<<"\n Sizes double variable and pointer "<<sizeof(d)<<" "<<sizeof(d1);
    cout<<"\n";
    return 0;
}
