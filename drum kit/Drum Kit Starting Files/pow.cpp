#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    int choti=power(n-1);
    int badi=2*choti;
    return badi;
}
int main(){
    int n;
    cout<<"enter the vslue "<<endl;
    cin>>n;
    cout<<"value is "<<power(n)<<endl;
}