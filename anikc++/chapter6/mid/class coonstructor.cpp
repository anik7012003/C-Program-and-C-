#include<iostream>
using namespace std;
class Rectangle{
    int area;
    public:
    Rectangle(int width, int height){
        area =width*height;
        cout<<"Area of the rectangle is:"<<area<<endl;

    }
    Rectangle(){
        area=0;
        cout<<"\n Area:"<<area<<endl;
    }
    ~Rectangle(){
        //cout<<"Destructor called"<<endl;
    }
};
int mani(){
    Rectangle obj(20,30);
    
}