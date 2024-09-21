#include<iostream>
using namespace std;
int main(){

    //triangle pattern
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl; 
    }


    //example 2
    int a=5;
    for(int i=0;i<a;i++){
        for(int j=0;j<i+1;j++){
            cout<<(i+1);
        }
        cout<<endl; 
    }


    //example 3
    int b=5;
    for(int i=0;i<b;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        cout<<endl; 
    }


    //example 4  (reverse triangle)
    int c=5;
    for(int i=0;i<c;i++){
        for(int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl; 
    }

    //example 5  (floyd's triangle)
    int d=4;
    int num=1;
    for(int i=0;i<d;i++){
        for(int j=i+1;j>0;j--){
            cout<<num;
             num++;

        }
       
        cout<<endl; 
    }

    //inverted triamgle
   int e=4;
   //int num=1;
   for(int i=0;i<e;i++){
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    for(int j=0;j<e-1;j++){
        cout<<(i+1);
    }
    cout<<endl;
   }



    return 0;
}
