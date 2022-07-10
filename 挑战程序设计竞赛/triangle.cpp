#include<iostream>
#include <algorithm>
using namespace std;
#define MAX_N 100

int n ,a[MAX_N];

void solve(){
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				int len=a[i]+a[j]+a[k];
				int max_num=max(a[i],max(a[j],a[k]));
				int rest =len-max_num;
				if(max_num<max_num){
					ans=max(len,ans);
				}
			}
		}
	}
	printf("%d\n",ans);	
}


int main()
{
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	solve();
	return 0;
}
