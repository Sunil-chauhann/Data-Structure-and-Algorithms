#include<iostream>
#define chess_width 8 //preprocessor or macro
using namespace std;

// Sunil Chauhan, CGC, 2024

int a = 10;

void showHelloWorld(){
	cout<<"Hello World"<<endl;
	cout<<"Sunil Chauhan, CGC, 2024"<<endl;
	int a = 20;
	cout<<"Local variable a : "<<a<<endl;
}

int main(){
	
	showHelloWorld();
	//Step 1
	cout<<"bool size : "<<sizeof(bool)<<endl;
	cout<<"char size : "<<sizeof(char)<<endl;
	cout<<"int size : "<<sizeof(int)<<endl;
	cout<<"float size : "<<sizeof(float)<<endl;
	cout<<"double size : "<<sizeof(double)<<endl;
	cout<<"long long int size : "<<sizeof(long long int)<<endl;
	
	//Step 2
	cout<<"Global variable a : "<<a<<endl;
	
	//Step 3
	const int seconds_in_hour = 3600;
	cout<<"seconds in a hour : "<<seconds_in_hour<<endl;
	cout<<"chess width : "<<chess_width<<endl;
	
	return 0;
}
