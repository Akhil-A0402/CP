#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    double x, y;
    while(t--){
        cin>>x>>y;
        if(x*1.07 >= y){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}