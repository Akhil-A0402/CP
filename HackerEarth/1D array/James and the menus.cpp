#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;

	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
	}

	int arr2[n]={0};

	for(int i=0;i<m;i++){
		int pos = 0, value = arr[0][i];
		for(int j=1;j<n;j++){
			if(arr[j][i]>value){
				pos = j;
				value = arr[j][i];
			}
		}
		arr2[pos]++;
	}

	int max = *max_element(arr2, arr2+n);
	// cout<<*find(arr2, arr2+n, max);

	float arr3[n]={0};
	for(int i=0;i<n;i++){
		if(arr2[i]==max){
			float sum = 0;
			for(int j=0;j<m;j++){
				sum+=arr[i][j];
			}
			arr3[i] = sum/m;
		}
	}

	float max2 = *max_element(arr3, arr3+n);
	cout<<(find(arr3, arr3+n, max2)-arr3)+1;
	return 0;
}