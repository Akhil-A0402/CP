#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        long long int a[n], b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];

        long long int sum=0;
        long long int sum2=0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                long long int temp=a[i];
                a[i]=b[i];
                b[i]=temp;
            }
        }
        for(int i=0;i<n-1;i++){
            sum+=(abs(a[i]-a[i+1]));
            sum2+=(abs(b[i]-b[i+1]));
        }
        cout<<abs(sum+sum2)<<"\n";
    }
    return 0;
}
