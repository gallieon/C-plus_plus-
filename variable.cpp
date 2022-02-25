#include <iostream>
using namespace std;
        //variable decliration
extern int a,b;
extern int c;
extern float f;

int main()
{
    //variable defination
 int a,b;
 int c;
 float f;

    //initialization 
 cout<<"enter the value of first integer \n";
 cin >> a;
cout<<"enter the value of second integer \n";
 cin >> b;
 c = a+b;
 f = a/b;
 cout<<"Addition \t"<< c << endl;
 cout<<"Division \t"<< f << endl;

}

