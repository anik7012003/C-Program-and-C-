#include<iostream>
using namespace std;
class base1{
 public:
  void greetings(){
      cout<<"Hi Orchi "<<endl;

  }
};
class base2{
 public:
 void say(){
    cout<<"How are you?"<<endl;

 }
};
class base3: public base1,public base2{
    int a;
    public:
 void greetings (){
    base2::say();
 }
 };
 class b{
    public:
    void speak(){
        cout <<"Love you 3000"<<endl;
    }
 };
 class d:public b{
    int c;
    public:
    void speak(){
b::speak();
    }
 };
 int main(){
    base1 b1;
    // base1 b2;
    base3 b3;
    b1.greetings();
    //b2.greetings();
    b3.greetings();
    b bab1;
    bab1.speak();
   // d babe2;
   // babe2.speak();
    return 0;

 }