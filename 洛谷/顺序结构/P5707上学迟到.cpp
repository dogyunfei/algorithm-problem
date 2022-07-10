#include<iostream>
using namespace std;

int s, v, t;
int main()
{
	cin >> s >> v;
	if (s % v == 0)
	{
		t = s / v + 10;
		if (t < 480)printf("0%d:%d", 8 - t / 60, 60 - t % 60);
		else if (t >= 480 && t <= 1320)printf("%d:%d", 32 - t / 60, 60 - t % 60);
		else printf("0%d:%d", 32 - t % 60, 60 - t % 60);
	}
	else
	{
		t = s / v + 11;
		if (t < 480)printf("0%d:%d", 7 - t / 60, 60 - t % 60);
		else if (t >= 480 && t <= 1320)printf("%d:%d", 31 - t / 60, 60 - t % 60);
		else printf("0%d:%d", 31 - t % 60, 60 - t % 60);
		
	}

	return 0;

}
