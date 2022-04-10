#include <iostream>
#include <string>
using namespace std;

void sort(int a[], int n, int d){
    if(d==0){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[j]<a[i]){
                    int temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
    }else{
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]){
                    int temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
    }
}

int tax(int a[], int n, int x, int y){
    int x1=0;
    int y1=0;

    for(int i=0;i<n-1;i++){
        if(a[i]==0 && a[i+1]==1){
            x1++;
        }
        if(a[i]==1 && a[i+1]==0){
            y1++;
        }
    }
    return x1*x+y1*y;
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n, x, y;
	    cin>>n>>x>>y;
	    int a[n];
        for(int i=0;i<n;i++){
            char ai;
            cin>>ai;
            a[i]=(int)ai-48;
        }
	    if(x>y){
            sort(a, n, 1);
        }
        else{
            sort(a, n, 0);
        }
        cout<<tax(a, n, x, y)<<"\n";
	}
	return 0;
}
