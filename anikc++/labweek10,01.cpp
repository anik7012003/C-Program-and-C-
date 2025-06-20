#include<iostream>
using namespace std;
class Person{
    protected:
    string name ="Anik";
    int ID =22303210;
};
class Student : public Person {
    public:
    void studentData(){
    
    cout<<"Student Data:"<<name <<endl<<ID<<endl;
    }
};
int main(){
    //Creating object of class "Student" 
    Student s;
    s.studentData();
    return 0; 
    }