#include <iostream>
#include <climits>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	// int integers(int arr[], int n){
	//     int i;
	//     for(int j=0;j<n;j++){
	//         i+=(int)arr[i];
	//     }
	//     return i;
	// }
	
	// int alls(int arr[], int n, int set[], int count){
	//     set[count]=integers(arr,n);
	//     for(int i=0;i<n;i++){
	//         for(int j=i+1;j<n;j++){
	//             int temp=arr[j];
	//             arr[j]=arr[i];
	//             arr[i]=temp;
	//             count++;
	//             set[count]=integers(arr, n);
	//         }
	//     }
	//     return count;
	// }
	
	while(t--){
	    int d, n;
	    cin>>d;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0;i<n;i++){
	        arr[i]=n%10;
	    }
	    
	    int tset[1000];
	    int count=0;
	    
	    // count=alls(arr, n, tset, count);
	    
	    // int status=0;
	    // for(int i=0;i<count;i++)
	    //     if(tset[0]%5==0){
	    //         cout<<"Yes\n";
	    //         status=1;
	    //     }
	    
	    // if(!status)
	    //     cout<<"No\n";
	}
	return 0;
}
