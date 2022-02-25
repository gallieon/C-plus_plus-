#include <iostream>
#include <string>
using namespace std;
class a{
  public:
  string f_n;
  string l_n;
  int age;
  int cls;
};
class b: public a{
  public:
  int c(){
  cout<<"enter your full name\n";
  cin>>f_n>>l_n;
  }      
};
 class d: public a{
    public:
    int e(){
        cout<<"enter your age\n";
        cin>>age;
    }
 };

int main(){
    b b1;
    b1.c();
    d d1;
    d1.e();
    cout<<"__________________________________________\n";
    cout<<"your name is: "<<b1.f_n<<b1.l_n<<endl;
    cout<<"your age is: " <<d1.age;
    
}

