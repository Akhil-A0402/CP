#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k==0){
            if(n%4==0){
                cout<<"Off\n";
            }
            else
                cout<<"On\n";
        }else{
            if(n%4==0)
                cout<<"On\n";
            else
                cout<<"Ambiguous\n";
        }

    }
    return 0;
}