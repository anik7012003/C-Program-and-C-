#include<iostream>
using namespace std;
class Compleex {
    private :
    double real;
    double imaginary;
    public:
    Compleex (){}
    Compleex( double real, double imaginary ){
        real =real;
        imaginary = imaginary;
    }
  friend Compleex add(Compleex c1,Compleex c2, Compleex c3);
   void print(){
        cout <<"Your sum is here:"<<real<<"+"<<imaginary<<"i"<<endl;
    }
  
};
Compleex add(Compleex c1,Compleex c2,Compleex c3 ){
    c3.real=(c1.real+c2.real);
    c3.imaginary=(c1.imaginary+c2.imaginary);
    return c3;

}
int main(){
    Compleex c1(2,3);
    Compleex c2(5,7);
    Compleex c3;
    c3= add(c1,c2,c3);
    c3.print();
    return 0;
}
