#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int sum=1;
        for(int i=2;i<=n;i++){
            if(i%2==0){
                sum=(sum^i);
            }else{
                sum=(sum&i);
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}