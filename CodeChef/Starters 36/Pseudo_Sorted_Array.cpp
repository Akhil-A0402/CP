#include<iostream>
using namespace std;
typedef long long int ll;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        ll arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int count=0;

        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1])
                count++;
        }
        if(count<=1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}