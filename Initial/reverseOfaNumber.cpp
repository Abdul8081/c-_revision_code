#include<iostream>
using namespace std;
int main(){
    int n,re=0; cin>>n;
    while(n!=0){
        re = re*10 + n%10;
        n/=10;
    }
    cout<<re;
}