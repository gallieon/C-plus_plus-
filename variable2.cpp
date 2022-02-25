#include <iostream>

using namespace std;

// global variable
int g;

int main()
{
    //local variable
    int a,b;
    // initialization
    cout <<"enter the first integer \n";
    cin>>a;
    cout <<"enter the second integer \n";
    cin>>b;
    
    //methamatical operation
    g= a+b;
    
    cout<<"Addition \t"<<g;

    return 0;
}
