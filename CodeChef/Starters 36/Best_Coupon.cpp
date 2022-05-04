#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        if(x-(x/10)<x-100){
            cout<<x/10<<"\n";
        }else{
            cout<<100<<"\n";
        }
    }
    return 0;
}