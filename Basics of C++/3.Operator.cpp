#include<iostream>
using namespace std;


void showHelloWorld(){
	cout<<"Hello World"<<endl;
	cout<<"Sunil Chauhan, CGC, 2024"<<endl;
}

int main(){
	showHelloWorld();
	
	//Step 1
	int a = 15;
	int b = 10;
	
	cout<<"Sum : "<<(a+b)<<endl;
	cout<<"Diff : "<<(a-b)<<endl;
	cout<<"mul : "<<(a*b)<<endl;
	cout<<"divide : "<<(a/b)<<endl;
	cout<<"modulo : "<<(a%b)<<endl;
	
	int c = 10;
	cout<<"c : "<<c<<endl;
	c++;
	cout<<"after increment : "<<c<<endl;
	c--;
	cout<<"after decrement : "<<c<<endl;
	
	bool checkval = (c==10);
	cout<<checkval<<endl;
	
	return 0;
}
