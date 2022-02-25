#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i=0;
    while(i<=3)
    {
        cout<<"outer loop executes"<<endl;
        int j=0;
        while(j<=4)
        {
            cout<<"inneer loop ececutes";
            cout<<"i= "<<i<<"and j="<<j<<endl;
            j++;
        }
        i++;
        }

}
