#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"enter your string:";
	getline(cin,s);

	string word,large1,small1;
	set<int>data;
	int length,small,large,i=0;

	stringstream ss(s);
	while(ss>>word){
		length=word.size();
		data.insert(length);
			}

	auto it=data.begin();
	small=*it;
	auto it1=data.rbegin();
	large=*it1;

//	cout<<large<<endl;
	//for(int num:data){
		//cout<<num<<" ";
	//}

	

	ss.clear();
	ss.str(s);
	while(ss>>word){
		if(word.size()==large){
			large1=word;
		}
		if(word.size()==small){
			small1=word;
		}
	}


	cout<<large1<<" "<<large<<endl;
	cout<<small1<<" "<<small<<endl;

	return 0;
}
		

