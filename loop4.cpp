#include <iostream>
#include <conio.h>
using namespace std;
 int main()
 {
     int i,j;
     i=1;
     cout<<"tringal number pattern\n\n";
     cout<<"here your pattern\n"<<endl;
     do{
         j=1;
         do{
         cout<<j;
         j++;
     }while(j<=i);
     cout<<"\n";
     i++;
 }
 while(i<=10);
 
 return 0;
}
