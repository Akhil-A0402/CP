#include<iostream>
using namespace std;

int gcd(int a, int b){
    while(a!=0){
        int temp=a;
        a=b%a;
        b=temp;
    }
    return b;
}

void check(int a, int b, int *i1, int *i2){
    for(int i=min(a, b);i<=max(a,b);i++){
            for(int j=i+1;j<=max(a, b);j++){
                int hcf=gcd(i, j);
                if(hcf>1){
                    if(*i1+*i2>i+j){
                        *i1=i;
                        *i2=j;
                        return;
                    }
                }
            }
        }
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int a, b;
        cin>>a>>b;
        
        int i1=max(a,b)+1;
        int i2=max(a,b)+1;
        check(a, b, &i1, &i2);
        if(i1+i2==2*(max(a,b)+1)){
            cout<<"-1"<<"\n";
        }
        else{
            cout<<min(i1, i2)<<" "<<max(i1, i2)<<"\n";
        }
    }
    return 0;
}