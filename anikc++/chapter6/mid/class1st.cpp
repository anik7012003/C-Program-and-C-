#include<iostream>
using namespace std;
class Factory{
    string productName ;
    string productType;
    public:
    void setProductName(string name)

    {
        this->productName =name;
    }
    //Getter method to get the value of Product Name.
    string getProductName()const
    {
        return  this -> productName;

    }

};
int main(){
    Factory f1,f2;   //Creating two objects for factory class 
    cout<<"Enter first object's details:"<<endl;
    
    cout<<"First Object Details"<<endl;
    cout<<"Product Type : "<<f1.getProductName()<<endl;
    cout<<"Second Object Details"<<endl;
    cout<<"Product Type :"<<f2.getProductName();
    return 0;
}