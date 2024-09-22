#include<iostream>
using namespace std;
//function to print hello world
void hello(){
    cout<<"hello world"<<endl;
}

//function to calculate sum
int sum(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    hello();
    cout<<sum(3,4);
    return 0;
}

