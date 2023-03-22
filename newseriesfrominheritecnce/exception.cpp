 #include<iostream>
 using namespace  std;
 int divison(int x ,int y){
         if(y==0){
         throw 101;}
         return x/y;}
   int main()
 {
     int a;
     int b,c;
     cin>>a;
     cin>>b;

     try{
        int x= divison(a,b);
         cout<<x<<endl;
     }
      catch(int e){
 cout<<"error is the "<<e<<endl;
      }
      cout<<"bye";
     return 0;
 }

#include <iostream>
 using namespace std;

 int main()
// // {
// // int x = -1;

// // // Some code
 cout << "Before try \n";
 try {
 	cout << "Inside try \n";
 	if (x < 0)
 	{
 		throw x;
 		cout << "After throw (Never executed) \n"; 	}
// // }
// // catch (int x ) {
// // 	cout << "Exception Caught \n";
// // }

// // cout << "After catch (Will be executed) \n";
// // return 0;
// // }


// #include <iostream>
// using namespace std;

// int main()
// {
// 	try {
// 	throw 10; // single colun signifies the character value double colun stting value 
// 	}
	
// 	catch (...) {
// 		cout << "Default Exception\n";
// 	}
//     catch (int e) {
// 		cout << "Caught " << e;
// 	}   
// 	return 0;
// }


// // #include<iostream>
// // using namespace std;
 
// // class Base {};
// // class Derived: public Base {};
// // int main()
// // {
// //    Derived d;
// //    try {
// //        throw d;
// //    }
// //    catch(Derived d) {
// //         cout<<"Caught Derived Exception";
// //    }    // yaha par agar humara catch uper hai to hum log simple sa keh sakte hai jo class uper catch kr rahi hogi uska catch pehle perform hoga easily
// //    catch(Base b) {
// //         cout<<"Caught Base Exception";
// //    }
// //    return 0;
// // }

#include <iostream>
using namespace std;
 
// Ideally it should have been "int fun() (int)"
int fun() throw(int) // ye throw ab c++11 mai aaya hai ye 
{
    throw 10;
}
 
int main()
{
    try
    {
        fun();
    }
    catch (int )
    {
        cout << "Caught";
    }
    return 0;
}
// yaha pr bhaut saare features hai exception handling ke it is more easy than the error handling we all know that we can easily manage the code of the exception handling.