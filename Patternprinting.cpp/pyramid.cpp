#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;

        // 5
        //     * 
        //    * * 
        //   * * * 
        //  * * * * 
        // * * * * * 

        //         * 
        //       * * * 
        //     * * * * * 
        //   * * * * * * * 
        // * * * * * * * * * 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=1;i<=n;i++){
        // for the space 
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //for the printing of the diamond
        for(int k=1;k<=2*i-1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}