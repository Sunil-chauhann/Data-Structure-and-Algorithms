//to find maximum subarray using kadane's algorithm T.C. = O(n)

#include<bits/stdc++.h>
using namespace std;

int max_sum(int arr[], int size){
	int max_sum = arr[0];
	int curr_sum = arr[0];
	for(int i = 1; i<size; i++){
		curr_sum += arr[i];
		if(curr_sum < 0 ){
			curr_sum = 0;
		}
		else if(curr_sum > max_sum){
			max_sum = curr_sum;
		}
		//(curr_sum < 0) ? (curr_sum = 0) : (max_sum = max(curr_sum, max_sum)); using ternary operator
	}
	return max_sum;
}

int main(){
	cout<<"Sunil Chauhan, CGC, 2024"<<endl;
	int size = 10;
	int arr[size] = {2, 4, -8, 9, 10, -2, 4, -20, 10, 11};
	cout<<"the max sum is : "<<max_sum(arr, size);

	return 0;
}
