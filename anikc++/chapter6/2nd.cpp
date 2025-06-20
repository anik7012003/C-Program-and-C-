#include<iostream>
using namespace std;
class Example{
    int a;
    double b;
    public:
    Example (int x,double y){
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<endl<<b<<endl;
    }
};
int main(){
    Example ex(30,89.7);
    ex.display();
}