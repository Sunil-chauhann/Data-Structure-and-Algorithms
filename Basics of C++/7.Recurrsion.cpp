#include<bits/stdc++.h>
using namespace std;

void func(int n){
	if(n<2) return;
	cout<<n<<" ";
	func(n-2);
}

int main(){
	cout<<"Sunil Chauhan, CGC, 2024"<<endl<<endl;
	int n;
	cin>>n;
	func(n);
	return 0;
}

