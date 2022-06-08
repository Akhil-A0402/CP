#include<iostream>
using namespace std;
#define ll long long int

int main(){
    int t;
    ll x, y;
    cin>>t;

    while(t--){
        cin>>x>>y;
        int count=0;
        while(x%3!=0 && y%3!=0){
            if(x>y){
                x=abs(x-y);
            }else{
                y=abs(x-y);
            }
            count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}