#include<iostream>
using namespace std;
 int main() {
    cout << "Mohd\nMuddassir\nAhmed\n";
    int age=21; //int variable
    cout<<age<<endl;  //printing int variable
    string education="cse";  //string
    cout<<education<<endl;   //printing string
    int price;
    cout<<"enter price ";  
    cin>>price;  //taking input
    cout<<"the price = "<<price<<endl;  //printing the input value
    //let's use some basic operators....
    int a=10,b=20;
    //arithmetic operators
    cout<<"sum = "<<(a+b)<<endl;
    cout<<"difference = "<<(a-b)<<endl;
    cout<<"multiplication = "<<(a*b)<<endl;
    cout<<"division = "<<(a/b)<<endl;
    cout<<"modulo = "<<(a%b)<<endl;

    //relational operators (if true...returns 1, if false....returns 0)
    cout<<(3>5)<<endl;
    cout<<(3<5)<<endl;
    cout<<(3<=5)<<endl;
    cout<<(3>=5)<<endl;
    cout<<(3==3)<<endl;
    cout<<(3==5)<<endl;

    //logical operators (OR(||),AND(&&),NOT(!))
    //logical NOT(1) returns an opposite value, eg:if 1...returns 0, if 0...returns 1.
    
    cout<<!(3>5)<<endl; //returns 1,though it should return 0 as its false
   
    //logical OR(||) if any of the value is true returns 1, if both are false...returns 0

    cout<<((3<5)||(3>5))<<endl;   //returns 1
    cout<<((3>5)||(3>6))<<endl;   //returns 0

    //logical AND(&&) its the opposite of OR, it returns 1 only if both the values are true and returns false

    cout<<((3<5)&&(3>5))<<endl;   //returns 0
    cout<<((3<5)||(3<7))<<endl;   //returns 1
    return 0;
 }