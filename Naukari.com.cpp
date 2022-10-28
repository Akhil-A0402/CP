#include<iostream>
#include<vector>
using namespace std;

int tree(int arr[], int n){
    int total = 1<<n;
    int sum2=INT_MIN;
    for(int i=1;i<total;i++){
        long long sum = 0;
        for(int j=0;j<n;j++)
            if(i & (1 << j))
                sum+=arr[j];
        cout<<sum<<"\n";
        if(sum2==INT_MIN && sum2!=0){
            sum2=sum;
        }else{
            sum2= sum&sum2;
        }
    }
    // return sum2;
    return 1;
}

int main(){
    int t;
    cin>>t;

    int n;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<tree(arr, n);
        
    }
    return 0;
}