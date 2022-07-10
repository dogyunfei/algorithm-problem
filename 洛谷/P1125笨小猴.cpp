#include "cstdio"
#include <cstring>//strlen函数
using namespace std;

char s[110];//字符数组
int sum[26];//记录和
const int prime[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

int main(){
	int maxn=0,minn=110;//
	scanf("%s",s);//用scanf读字符数组时，不用加&
	int len=strlen(s);
	for(int i=0;i<len;i++){//遍历字符串
		sum[s[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(sum[i]>maxn) maxn=sum[i];
		if(sum[i]>0&&sum[i]<minn) minn=sum[i];
	}
	for(int i=0;i<25;i++){
		if(maxn-minn==prime[i]){
			printf("Lucky Word\n%d",maxn-minn);
			return 0;
		}
	}
	printf("No Answer\n0");
	return 0;
}
