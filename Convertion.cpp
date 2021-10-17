#include<iostream>
using namespace std;
int binarytodecimel(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int lastdigit=n%10;
        ans+=lastdigit*x;
        x=x*2;
        n=n/10;
    }
    return ans;
}
int octaltodecimal(int o){
    int ans=0;
    int x=1;
    while(o>0){
        int lastdigit=o%10;
        ans+=lastdigit*x;
        x*=8;
        o=o/10;
    }
    return ans;
}
int main(){
    int n,x;
    cin>>n>>x;
    cout<<binarytodecimel(n)<<endl;
    cout<<octaltodecimal(x);
    return 0;
}