#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
	// your code goes here
	int t;
	cin>>t;
	int arr[4];
	while(t--){
	    for(int i=0;i<4;i++){
	        cin>>arr[i];
	    }
	    sort(arr, arr+4);
	    int m=arr[3];
	    int i1, i2, con=0;
	    if(m%((arr[0]+arr[1])/2)==0){
	        i1=((arr[0]+arr[1])/2);
	    }
	    else if(m%((arr[1]+arr[2])/2)==0){
	        i1=((arr[1]+arr[2])/2);
	    }
	    else if(m%((arr[2]+arr[0])/2)==0){
	        i1= ((arr[2]+arr[0])/2);
	    }
	    else{
	        i1=-1;
	        i2=-1;
	        con=1;
	    }
	    if(!con){
	        i2=m/i1;
	    }
	    if(i1>i2){
	        cout<<i1<<" "<<i2;
	    }else{
	        cout<<i2<<" "<<i1;
	    }
	   
	}
	return 0;
}
