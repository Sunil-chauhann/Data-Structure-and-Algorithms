#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<<"Sunil Chauhan, CGC, 2024"<<endl;
	cout<<endl;
	
	char str1[] = "hello world";
	char str2[]={'a','c','s','@','$'};
	
	char temp[100];
	strcpy(temp, str1); //strcpy
	cout<<"str1 copied to temp : "<<temp<<endl;
	cout<<"length of temp is : "<<strlen(temp)<<endl; //strlen
	cout<<"concatenation : "<<strcat(temp, str2); //strcat
	cout<<"temp & str1 is equal : "<<strcmp(temp, str1)<<endl; //strcmp
	cout<<endl;
	
	string s1 = "Hello";
	string s2 = "world";
	
	cout<<"length of s1 : "<<s1.size()<<endl;
	cout<<"s1 + s2 : "<<s1+s2<<endl;
	cout<<"s1 equals to s2 : "<<(s1==s1)<<endl;
	
	return 0;
}

