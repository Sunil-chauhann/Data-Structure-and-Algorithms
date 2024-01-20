#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int target){
	for(int i = 0; i<size; i++){
		if(arr[i]==target) return i;
	}
	return -1;
}

int binarySearch(int arr[], int size, int target){
	int start = 0;
	int end = size-1;
	while(start<=end){
		int mid = start+(end-start)/2;
		if(target==arr[mid]) return mid;
		if(target<arr[mid]) end = mid-1;
		else start++;
	}
	return -1;
}
int main(){
	cout<<"Sunil Chauhan, CGC, 2024"<<endl;
	
	int arr[]={1,2,3,4,5,6};
	int size = sizeof(arr)/sizeof(int);
	int target;
	cout<<"LinearSearch -> enter the target value : ";
	cin>>target;
	cout<<"target value is at : "<<linearSearch(arr,size,target)<<" index "<<endl;
	int binary_target;
	cout<<"BinarySearch -> enter the target value : ";
	cin>>binary_target;
	cout<<"target value is at : "<<binarySearch(arr,size,binary_target)<<" index "<<endl;
	return 0;
}

