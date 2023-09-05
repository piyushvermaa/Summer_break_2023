//modified bianry search
#include<iostream>
using namespace std;
int findd(int arr[],int n,int target){
	int s=0,e=n-1;
	int m=s+(e-s)/2;
	while(s<=e){
		if(arr[m]==target){
			return m;
		}
		if(arr[s]<arr[m]){
			if(arr[s]<=target and target < arr[m] ){
				e=m-1;
			}
			else{
				s=m+1;
			}
		}
			else{
				if(arr[m]<target and target <=arr[e] ){
				s=m+1;
			}
			else{
				e=m-1;
			}
			
		}
		m=s+(e-s)/2;
	}
	return -1;
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	cout<<findd(arr,n,target);
	return 0;
}