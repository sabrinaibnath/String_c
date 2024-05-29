#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"enter your string:";
	getline(cin,s);

	string word,key;
	int count=0;
	cout<<"enter your key:";
	cin>>key;

	stringstream ss (s);
	while(ss>>word){
		if(word==key){
			count++;
		}
	}
	if(count>0){
		cout<<"found"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
	return 0;
}
