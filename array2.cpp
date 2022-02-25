#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"enter the 5 value for the array:\n";
    for(int i=1;i<=5;i++)
    {
        cin>>arr[i];
    }
    cout<<"_______printing array elements_________\n";
    for(int i=1;i<=5;i++)
    {
        cout<<arr[i]<<"\n";
    }
}

