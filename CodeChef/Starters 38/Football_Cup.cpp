#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    int x, y;
    while(t--){
        cin>>x>>y;
        if(x==y && x+y>1)
            cout<<"YES\n";
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}