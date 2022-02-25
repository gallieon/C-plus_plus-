#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int a(int x, int y, int z);
int a(int x, int y);
int a(float x);

int a(int x, int y, int z)
{
    
    cout<<"Addition(x,y,z)\t\t"<<x+y+z<<endl;
    return 0;
}
int a(int x, int y)
{
    cout<<"Addition(x,z)\t\t"<<x+y<<endl;
    return 0;
    
}
int a(float x)
{
    cout<<"Multiplication(x,x)\t"<<x*x<<endl;
    return 0;
}
int main()
{
    int x,y,z;
    cout<<"enter the value of x\n";
    cin>>x;
    cout<<"enter the value of y\n";
    cin>>y;
    cout<<"enter the value of z\n";
    cin>>z;
   a(x,y,z);
   a(x,y);
   a(x);
   return 0;
}
