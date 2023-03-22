#include<iostream>
using namespace std;

class base{
    public:
    void fun1();
    void fun3();
    void fun2();
};
  class derrived :public base{
       public:
       void fun4();
       void fun5();
  };

  int main(){
    base *ptr;
    derrived d;
    ptr = &d;
    ptr->fun1();
    ptr->fun2();
    ptr->fun3();
      // mera ptr derrived class k kisi bhi function  ko points nahi karega kyuki ek basic car diriver super car kaise chalayega
    //   ptr->fun4(); // pointer jis class ka hoga usi k members ko call krega 

    // derrived *d;
    // base b;
    // d = &b;  simple sa matlab ye hai ki base class car advance acr kaise ban sakti hai 

    return 0;
  }