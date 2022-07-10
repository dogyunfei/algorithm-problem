#include<iostream>
using namespace std;

string a;
int main(){
	cin>>a;
	int len=a.size();
	for(int i=len;i>0;i--){
		cout<<a[i-1];
	}
	return 0;
}
