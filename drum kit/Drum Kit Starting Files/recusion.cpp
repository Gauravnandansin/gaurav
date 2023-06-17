#include<iostream>
using namespace std;
int fact(int n){
    if  (n==0){
        return 1;
    }
    int choti=fact(n-1);
    int badi=2*choti;
    return badi;
}
int main(){
    int n;
    cout<<"value of n "<<endl;
    cin>>n;
    cout<<"factorial is "<<fact(n);
}
