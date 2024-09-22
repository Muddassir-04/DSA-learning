void hello(){
    cout<<"hello world"<<endl;
}
int sum(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    hello();
    cout<<sum(3,4);
    return 0;
}
