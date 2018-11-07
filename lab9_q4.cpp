#include<iostream>
using namespace std;
int main()
{    //character array is initialised
    char myname[14]={‘A’,'N','A','N','Y','A','.','N','A','I','C','K'};
    char *p;
    cout<<"\n Printing the array elements\n”;
    //using normal index method
    for(int i=0;name[i]!=‘\0';i++)
        cout<<""<<name[i];
        cout<<"\n Printing array elements using pointer:\n”;
        p=name;
        //using pointer method
        for(int i=0;*p!=‘\0';i++)
            {    cout<<""<<*p;
                p++;
            }
            
            return 0;
            }
