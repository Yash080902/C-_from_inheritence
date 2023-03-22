// #include<iostream>
//  using namespace std;
//  class teri;
//    class meri{
//     private:
//     int a=10;
//     friend teri;
//    };
//    class teri{
//      meri m;
//      void show(){
//          cout<<m.a; // it is inaccessible because humare pass sirf meri teri  class hai jisme sabi members private hai 
//      }
//    };
 #include<iostream>
 using namespace std;
   class meri{
    private:
    int a=10;
    protected:
    int b=11;
    public:
    int x=20;
    friend void show();
   };
//    class teri{
//     private:
        meri t;
     void show(){
         cout<<t.a; // it is inaccessible because humare pass sirf meri teri  class hai jisme sabi members private hai 
         t.b;
         t.x;
     }
  /*yaha pr ek cheej hai hum log freind function se private protected ya public members ko access bhi k sakte hai isme hum logo ko diye gaye function ya class ka prototype uper vali data jisme hai us class mai freind of us declare karna hota hai*/