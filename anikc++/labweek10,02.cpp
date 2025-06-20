#include<iostream>
using namespace std;
class Shape{
    protected:
    double hight =40.56;
    double width = 56.78; 
};
class Rectangle : protected Shape{
    public:
    void areaofRectangle(){
        cout<<"The Area of Rectangle is:"<<hight*width<<endl;
    }
};
int main(){
    Rectangle r;
        r.areaofRectangle();
    return 0 ;
}