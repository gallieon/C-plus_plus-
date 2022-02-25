#include <iostream>  
using namespace std;  
int main ()
{  
   int a;  
   cout<<"enter your percentage:\n";    
   cin>>a;  
    if (a <0 || a >100)    
    {    
    cout<<"wrong number";    
    }    
    else if(a >= 0 && a < 50)
    {    
    cout<<"Fail";    
    }    
    else if (a >= 50 && a < 60)    
    {    
    cout<<"D Grade";    
    }    
    else if (a >= 60 && a < 70)    
    {    
    cout<<"C Grade";    
    }    
    else if (a >= 70 && a < 80)    
    {    
    cout<<"B Grade";    
    }    
    else if (a >= 80 && a < 90)    
    {    
    cout<<"A Grade";    
    }    
    else if (a >= 90 && a <= 100)    
    {    
    cout<<"A+ Grade";  
}    
}   
