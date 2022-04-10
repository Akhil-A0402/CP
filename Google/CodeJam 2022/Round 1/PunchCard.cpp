#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int r,c;
        cin>>r>>c;
        for(int i=0;i<r;i++){
            if(i==0){
                cout<<"..+";
                cout<<("-+"*(c-1));
        }
    }
    return 0;
}