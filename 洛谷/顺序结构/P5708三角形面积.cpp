#include<iostream>
#include<math.h>
using namespace std;

double a,b,c,p;
int main(){
	cin>>a>>b>>c;
	p=(a+b+c)*0.5;
	printf("%.1lf",pow(p*(p-a)*(p-b)*(p-c),0.5));
	return 0;
}
