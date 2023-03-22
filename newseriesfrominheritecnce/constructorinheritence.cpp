#include<iostream>
using namespace std;

class base{
    public:
     int x;
      base(){
        // this is the constructor 
        // which is non parametrized 
        cout<< "basedefault constructor"<<endl;
      }
  base(int x){
    cout<<"paramofbaseconstructor"<<endl;
  }
};

class derrived:public base{
    public:
     int x;
      derrived(){
        // this is the constructor 
        // which is non parametrized 
        cout<< "derrived class constructor default"<<endl;
      }
  derrived(int x){
    cout<<"paramofderrrievdconstructor"<<endl;
  }
  derrived(int x, int y):base(x){   // this is the constructor which calls the base paramterized form 
    cout<<"parametierized of derrived"<<endl;
  }
};

int main(){

    //creates the objects here 
        // agar mere ko param of base chahiye to mai yaha pr ek constructor or banata hu
           derrived d(10,20);

     return 0;
}
 
