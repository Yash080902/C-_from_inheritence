#include<iostream>
using namespace std;

class first{
    private:
    int a=10;
    protected:
    int b;
    public:
    void showa(){
        cout<<a;
    }
};
class second:public first{
    private:
    int c;
    public:
    void showc(){
        cout<<c;
       cout<<b;
    }
};

int main(){

    // creates a object of both classes
    first f;
    // f.a // inaccessible hai because it is private member of first class
    f.showa();
    // f.b;  // protected member object kl sath baahar declare nhi hota that sit
}
