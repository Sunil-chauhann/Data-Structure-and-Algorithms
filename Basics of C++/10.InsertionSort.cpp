#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int size){ 
	for(int i = 0; i<size; i++){
		int j = i;
		while(j>0 && arr[j]<arr[j-1]){
			swap(arr[j], arr[j-1]);
			j--;
		}
	}
}

int main(){
	cout<<"Sunil Chauhan, CGC, 2024"<<endl<<endl;
	
	int arr[]={4,19,30,1,34,8};
	int size = sizeof(arr)/sizeof(int);
	cout<<"Before Insertion Sort we have : ";
	for(int i = 0; i<size; i++) cout<<arr[i]<<" ";
	
	cout<<endl;
	
	InsertionSort(arr, size);
	cout<<"After Insertion Sort we have : ";
	for(int i = 0; i<size; i++) cout<<arr[i]<<" ";
	return 0;
}

