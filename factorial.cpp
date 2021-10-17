#include<iostream>
using namespace std;
int Factorial(int num){
    int factorial=1;
    for(int i=2;i<=num;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    int fac=Factorial(n);
    cout<<fac<<endl;
    return 0;
}