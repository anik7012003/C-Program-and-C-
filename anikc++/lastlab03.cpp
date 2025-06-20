#include<iostream>
using namespace std;
class Dog{
    public:
    int excit =50 ;
    void  Display (){
        cout<<"exciting"<<endl;
    }
    void operator  ++(){
        if (excit > 0 && 720< excit) (excit=excit + 72)
    
        ;cout << "excited most"<<endl;
        }
        
        else {
            cout<< "Clam"<<endl
        }    
        
   void operator --(){
        if (excit > 720 && 10< excit) (excit=excit - 72)
       ; cout << " decreas excitment  "<<endl;
        }     
else{
    cout<<"nothing";
}
};
int main() {
    Dog d;
    d.Display();
    return 0;
}