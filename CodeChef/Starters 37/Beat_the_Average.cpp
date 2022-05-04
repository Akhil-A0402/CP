#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m, x;
        cin>>n>>m>>x;
        
        if(x!=m){
            cout<<((n*x)/(x+1))<<"\n";
        }
        else{
            cout<<"0\n";
        }
    }
    return 0;
}