#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x, y, z;
        cin>>x>>y>>z;

        cout<<((z-y)/x)<<"\n";
    }
    return 0;
}