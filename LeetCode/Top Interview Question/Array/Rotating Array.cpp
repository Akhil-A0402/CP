#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={1,2,3,4,5,6,7};

    int i = 0, j=0;
    int temp;
    do{
        j=(i+k)%nums.size();
        temp = nums[j];
        nums[j] = nums[i];
        i=j;
    }while(i!=0);

    return 0;
} 
