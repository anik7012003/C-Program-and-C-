#include<iostream>
using namespace std;
class AddAmmount {
         int ammount ;
         public:
         AddAmmount(){
            ammount = 50;
         }
          AddAmmount (int ammount){
            this->ammount=ammount;
          }
          void display_ammount(){
            cout<<"The total ammount in the piggie Bank is:$"<<ammount<<endl;
          }
          void cheek_ammount (){
            if(ammount>=1000){
                cout<<"Piggie Bank is full you cant add more"<<endl;
            }
            else{
                cout<<"The piggie Bank is not full yet"<<endl;
            }

          }
          
};
int main(){
    AddAmmount obj1 (1000);
    obj1.display_ammount();
    AddAmmount obj2(100);
        obj2.display_ammount();
    obj2.cheek_ammount();
 return 0;

}