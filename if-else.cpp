#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age: ";
    cin>>age;

    //using if-else conditional statement
    if(age>18){
        cout<<"eligible"<<endl;
    } else{
        cout<<"not eligible"<<endl;
    }
    return 0;

}