#include<iostream>
 using namespace std;
   class base {
        public:
   virtual void show()=0; // iska matlab ye hota hai ki ye pure virtual class hai jisme hum log chahte hai derrived class override kre base class k function ko

    //         cout<<"base class mai hai aap log"<<endl;
    //     }
        void create(){
            cout<<"kya create kroge base class mai";
        }
   };    // jis class k ander koi bhi ek function pure virtual hota hai vo class abstract class hoti hai
       class advanced:public base{
        public:
             void show(){
                cout<<"ye advanced hai beta";
             }     
       };
    int main(){
             base *ptr; advanced a;
             ptr=&a;
             ptr->show();
         return 0;
    }

    /* hum log run time polymorphism attend kar sakte hai due to the use of Virtual class usse hume ek name ko do function alag alag use krne ka moka milta hia jo humare polymorphuism ko bhadava deta hai  polymophism ka matlab hi y hota hai ek name ke do wyaqti alag alag kaam function kr rahe ho*/