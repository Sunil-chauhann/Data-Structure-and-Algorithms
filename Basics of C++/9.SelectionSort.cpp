#include<bits/stdc++.h>
using namespace std;

void SelectinSort(int arr[], int size){ 
	for(int i = 0; i<size; i++){
		int min = i;
		for(int j = i+1; j<size; j++){
			if(arr[j]<arr[min]) min = j;
		}
		swap(arr[i],arr[min]);
	}
}

int main(){
	cout<<"Sunil Chauhan, CGC, 2024"<<endl<<endl;
	
	int arr[]={4,19,30,1,34,8};
	int size = sizeof(arr)/sizeof(int);
	cout<<"Before Selection Sort we have : ";
	for(int i = 0; i<size; i++) cout<<arr[i]<<" ";
	
	cout<<endl;
	
	SelectinSort(arr, size);
	cout<<"After Selection Sort we have : ";
	for(int i = 0; i<size; i++) cout<<arr[i]<<" ";
	return 0;
}

