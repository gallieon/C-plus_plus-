#include<iostream>
#include<string>
using namespace std;
class a
{
    public:
    int print(int a)
    {
        cout<<a<<endl;
        return 0;
    }
    int print(double a)
    {
        cout<<a<<endl;
        return 0;
    }
    int print(string a)
    {
        cout<<a<<endl;
        return 0;
    }
};
int main()
{
    a obj;
    obj.print(12);  
    obj.print("Hello String");
    obj.print(12.12);

    return 0;
    
    
}
