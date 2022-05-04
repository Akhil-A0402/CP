#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }

        int time;
        if(sum<=((x*n)/2)){
            time=x;
        }else{
            time=n;
        }
        cout<<time<<"\n";
    }
    return 0;
}