#include<iostream>
using namespace std;

int DecToBinary(int decNum){
 int ans=0, pow=1;

 while (decNum>0)
 {
    int rem= decNum%2;
    decNum /= 2;
    ans += (rem*pow);
    pow *= 10;

 }
  return ans;
}

int binToDec(int binNum){
    int ans=0, pow=1;
    while(binNum>0){
        int rem= binNum%10;
        ans += rem*pow;
        binNum /= 10;
        pow *= 2;

    }
    return ans;

}
int main(){
    cout<<binToDec(101)<<endl;
    return 0;
}
 