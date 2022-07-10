#include<iostream>
using namespace std;
int a,b,c,d,sum;
int main(){
	cin>>a>>b>>c>>d;
	sum=(c-a)*60+d-b;
	printf("%d %d",sum/60,sum%60);
	return 0;
}
