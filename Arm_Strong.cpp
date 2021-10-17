#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int armstrong=0;
    int originaln=n;
    while(n>0){
        int lastdigit=n%10;
        armstrong+=pow(lastdigit,3);
        n=n/10;
    }
    if(armstrong==originaln){
        cout<<"It is an Armstrong"<<endl;
    }
    else{
        cout<<"Not";
    }
    return 0;
}