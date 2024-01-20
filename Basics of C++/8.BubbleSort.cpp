#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int size){ 
	for(int i = 0; i<size-1; i++){
		for(int j = 0; j<size-i; j++){
			if(arr[j-1]>arr[j]) 
				swap(arr[j],arr[j-1]);
		}
	}
}

int main(){
	cout<<"Sunil Chauhan, CGC, 2024"<<endl<<endl;
	
	int arr[]={4,19,30,1,34,8};
	int size = sizeof(arr)/sizeof(int);
	cout<<"Before Bubble Sort we have : ";
	for(int i = 0; i<size; i++) cout<<arr[i]<<" ";
	
	cout<<endl;
	
	BubbleSort(arr, size);
	cout<<"After Bubble Sort we have : ";
	for(int i = 0; i<size; i++) cout<<arr[i]<<" ";
	return 0;
}

