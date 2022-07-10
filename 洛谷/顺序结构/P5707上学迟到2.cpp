#include<bits/stdc++.h>
using namespace std;

double s, v;
int n, t, a, b;
int main()
{
	cin >> s >> v;
	n = 8 * 60 + 24 * 60; //两天总共的分钟数
	t = ceil(s / v) + 10; //向上取整，总共的分钟数
	n = n - t; //得出剩下的时间
	if (n >= 24 * 60) n -= 24 * 60;
	b = n % 60; //出发的时分
	a = n / 60; //出发的小时
	if (a < 10)
	{
		if (b < 10)printf("0%d:0%d", a, b);
		else printf("0%d:%d",a,b);
	}else{
		if (b < 10)printf("%d:0%d", a, b);
		else printf("%d:%d",a,b);
	}
	return 0;
}
