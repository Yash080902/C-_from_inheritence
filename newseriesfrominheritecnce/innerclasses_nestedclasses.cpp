#include<iostream>
using namespace std;
   class outer{
    public:
    int a;
    private:
    int b;
    protected:
    int c;
    static int count;
        void fun(){
            cout<<i.x;
        }
      class inner{
          public:
          int x;
          private:
         int y;
          protected:
          int d;
          void show(){
          cout<<count;}
      };
      inner i; // ye object kaam ka hai jo kaam krega outer k liye inner elements ko search krne ka 
     };
   outer o;  // class k ander hum log cout function sidha sidha nahi kr sakte hai 