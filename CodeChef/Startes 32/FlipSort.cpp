#include <iostream>
// #include<string>
#include<climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
        int s[n];
        for(int i=0;i<n;i++){
            char a;
            cin>>a;
            s[i]=(int)a-48;
        }
	    
	    int index[n]={0};
        int pd=0;
        int count=0;
        const int mx=INT_MAX;
        int idx[mx][2]; 

	//     for(int i=0;i<n;i++){
	//         if(s[i]==0){
	//             if(index[i]!=0){
	//                 for(int j=pd;j<i+1;j++)
    //                     s[j]=!s[j];
    //                 idx[count][0]=i+1-pd;
	//             }
	//             else{
	//                 for(int j=pd;j<i;j++){
    //                     s[j]=!s[j];
    //                 }
    //                 idx[count][0]=i-pd;
	//             }
    //             idx[count][0]=i;
    //             count++;
	//         }
	//     }
    //     cout<<count<<"\n";
    //     for(int i=0;i<count;i++)
    //         cout<<idx[i][0]<<" "<<idx[i][1]<<"\n";
	}
	return 0;
}
