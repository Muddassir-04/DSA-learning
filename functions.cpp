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


// factorial function
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *= i;
       
    }
    return fact;
}


// MAIN FUNCTION
int main(){
    hello();   //calling hello() function
    cout<<sum(3,4)<<endl;   //calling sum() function
    cout<<factorial(4);   //calling factorial() function
    return 0;
}
