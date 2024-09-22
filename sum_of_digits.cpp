//calculate the sum of digits in a number using functions concept

#include<iostream>
using namespace std;
int sum_of_digits(int num){
    int digit_sum=0;

    while(num>0){
        int last_digit=num%10;
        num=num/=10;
        digit_sum+=last_digit;
    }
    return digit_sum;
}

int main(){
    cout<<sum_of_digits(7896)<<endl;
    return 0;
}