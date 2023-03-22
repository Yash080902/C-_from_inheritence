#include<iostream>
  using namespace std;
     class test{
                 public:
                 int a=10;
static int count;
                 test(){
                          a=20;
                          count++;
                 }
     };
int test::count=0;  // ye ek baar hum logo ko scope resolution se declare krna hota hai ek baar outside the class 
 int main(){
    test t1;
    test t2;
    cout<<t1.count<<endl;
    cout<<test::count;
 return 0;  // yaha ek count sabhi test k objects ko cover kr lega jaise ki t1 ne constructor call kiya to count update hua simple jitne objects utne count ki value that sir.........
 }