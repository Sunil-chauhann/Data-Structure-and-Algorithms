#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){
	return a+b;
}

int sum(int a, int b, int c){
	return a + sum(b,c);
}

bool isPrime(int n){
	if(n<2) return false;
	for(int i = 2; i<n; i++) 
		if(n%i==0){
			return false;
	}
	return true;
}

int count(int n){
	int primenum = 0;
	for(int i = 2; i<n; i++){
		if(isPrime(i)) primenum++;
	}
	return primenum;
}

void printStar(int x){
	for(int i = 0; i<x; i++){
		for(int j = 0; j<=i; j++){
			cout<<" * ";
		}
		cout<<endl;
	}
}

int main(){
	
	cout<<"Sunil Chauhan, CGC, 2024"<<endl<<endl;
	
	//step1
	int ans = sum(5,20);
	cout<<"the 2 arg. (5,20) sum is : "<<ans<<endl;
	
	//step2
	int answer = sum(5,20,30);
	cout<<"the 3 arg. (5,20,30) sum is : "<<answer<<endl;
	
	cout<<endl;
	
	//step3
	int n;
	cout<<"enter the no. u want to check is prime or not : ";
	cin>>n;
	if(isPrime(n)) cout<<n<<" is a prime no."<<endl;
	else cout<<n<<" is not a prime no."<<endl;
	
	cout<<endl;
	
	cout<<"Total no. of prime till 100 : "<<count(100)<<endl;
	cout<<endl;
	
	//step4
	int x;
	cout<<"enter a no. to get star pattern : ";
	cin>>x;
	cout<<endl;
	printStar(x);
	return 0;
}

