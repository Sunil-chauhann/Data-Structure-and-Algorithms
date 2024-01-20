#include<bits/stdc++.h>
using namespace std;

int main(){
	
	cout<<"Sunil Chauhan, CGC, 2024"<<endl;
	cout<<endl;
	//step 1
	int arr[]={5,3,2,7,4};
	cout<<"the elements in the array are : "<<endl;
	for(int i = 0; i<4; i++)
		cout<<arr[i]<<endl;;
	
	cout<<endl;
	
	//step 2
	cout<<"After adding 100 to each element : "<<endl;
	for(int i = 0; i<4; i++)
	{
		arr[i]+=100;
		cout<<arr[i]<<endl;	
	}
	
	//step 3
	cout<<endl;
	cout<<"enter the no. to add : "<<endl;
	int sum = 0;
	for(int i = 0; i<5; i++){
		cin>>arr[i];
		sum+=arr[i];	
	}
	cout<<"the sum is : "<<sum<<endl;
	
	//step 4
	cout<<endl;
	cout<<"enter the 2d array elements : "<<endl;
	int array[3][3];
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cin>>array[i][j];
		}
	}
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	return 0;
}

