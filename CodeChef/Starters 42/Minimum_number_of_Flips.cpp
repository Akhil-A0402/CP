#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;

    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(n%2==1){
            cout<<-1<<"\n";
        }else{
            cout<<abs(sum/2)<<"\n";
        }
    }
    return 0;
}