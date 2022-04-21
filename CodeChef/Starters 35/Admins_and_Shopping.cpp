#include<iostream>
using namespace std;
#include<climits>

long long int ceils(long long  int a, long long int b){
        int z = a%b;
        return (a%b==0 ? a/b : a/b+1);
}

int main(){
    
    // typedef ll long long;

    int t;
    cin>>t;

    while(t--){
        long long int n, x;
        cin>>n>>x;
        long long int arr[n];
        long long int mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>*(arr+i);
        }

        for(int i=0;i<n;i++)
            mn=min(mn, *(arr+i));

        long long int ans = ceils(x, mn);

        cout<<max(ans, n)<<"\n";

    }
    return 0;
}