#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char b[50];
    char a[50];
    cout<<"enter your name:\n";
    cin>>b;
    cout<<"enter a valid password:\n";
    cin>>a;
    if(strcmp(b,"vinod")==0 && strcmp(a,"yadav")==0)
    {
        cout<<"welcome\nhave a good day...";
    }
    else
    {
        cout<<"please enter a valid password...";
    }
}

