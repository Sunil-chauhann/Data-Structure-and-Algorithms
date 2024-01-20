#include<iostream>
using namespace std;

int main(){
	cout<<"Sunil Chauhan, CGC, 2024"<<endl;
	cout<<endl;
	//step 1 
	
	cout<<"While loop"<<endl;
	
	int counter = 1;
	int sum = 0;
	while(counter<=10){
		sum+=counter;
		cout<<counter<<" ";
		counter++;
	}
	cout<<endl;
	cout<<"Sum of first 10 natural no. is : "<<sum<<endl;
	cout<<endl;
	//For loop
	
	cout<<"for loop"<<endl;
	
	sum = 0;
	for(int i = 1; i<=10; i++){
		sum+=i;
	}
	cout<<"Sum from 1 to 10 is : "<<sum<<endl;
	
	//Nested for loop
	
	for(int i = 0; i<=5; i++){
		for(int j = 0; j<i; j++){
			cout<<"1";
		}
		cout<<endl;
	}
	
	return 0;
}
