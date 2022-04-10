#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
        string s;
        cin>>s;
	    for(int i=0;i<n;i++){
            arr[i]=(int)s[i]-48;
	    }
	    
	    int status=0;
	    int count=0;
        int all=0;
        for(int i=0;i<n;i++){
	        if(arr[i]==1){
	            status=1;
                all++;
	        }
        }
        if(all==n){
            status=0;
            count=2;
        }
	    while(status){
	        int sets[n]={0};
    	    for(int i=0;i<n;i++){
    	        if(arr[i]==1 and sets[i-1]!=1 and arr[i-1]!=1){
    	            sets[i]=1;
    	        }
    	    }
    	    
    	    for(int i=0;i<n;i++){
    	        if(sets[i]==1)
        	        arr[i]=0;
    	    }
	        
	        int s=0;
	        for(int i=0;i<n;i++){
	            if(arr[i]==1){
	                s=1;
	            }
	        }
	        
	        if(s!=1){
	            status=0;
	        }
	        count++;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
