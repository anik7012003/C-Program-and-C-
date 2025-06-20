#include<iostream>
using namespace std;
class base1{
 public:
  void greetings(){
      cout<<"Namoskaram/ hello sir"<<endl;

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
 int main(){
    base1 b1;
    base1 b2;
    base3 b3;
    b1.greetings();
    b2.greetings();
    b3.greetings();
    return 0;

 }