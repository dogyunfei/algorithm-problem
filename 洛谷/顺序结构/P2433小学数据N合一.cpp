#include<iostream>
// 填上你觉得需要的其他头文件
#include<math.h>
const double PI=3.141593L;
using namespace std;
int main() {
	int T;
	cin >> T;
	if (T == 1) {
		// 粘贴问题 1 的主函数代码，除了 return 0
		cout << "I love Luogu!";
	} else if (T == 2) {
		// 粘贴问题 2 的主函数代码，除了 return 0
		cout << 2 + 4 << " " << 10 - 2 - 4;
	} else if (T == 3) {
		cout<<14/4<<endl<<14-14%4<<endl<<14%4<<endl;
		// 请自行完成问题 3 的代码
	} else if (T == 4) {
		printf("%.3f\n",500.0/3);
		// 请自行完成问题 4 的代码
	} else if (T == 5) {
		cout<<(260+220)/(12+20)<<endl;
		// 请自行完成问题 5 的代码
	} else if (T == 6) {
		cout<<sqrt(pow(6,2)+pow(9,2))<<endl;;
		// 请自行完成问题 6 的代码
	} else if (T == 7) {
		cout<<100+10<<endl<<100+10-20<<endl<<0<<endl;;
		// 请自行完成问题 7 的代码
	} else if (T == 8) {
		cout<<10*PI<<endl<<25*PI<<endl<<1.0*4/3*PI*125<<endl;
		// 请自行完成问题 8 的代码
	} else if (T == 9) {
		cout<<(((((1+1)*2)+1)*2)+1)*2<<endl;
		// 请自行完成问题 9 的代码
	} else if (T == 10) {
		cout<<9<<endl;
		// 请自行完成问题 10 的代码
	} else if (T == 11) {
		cout<<100.0/3<<endl;
		// 请自行完成问题 11 的代码
	} else if (T == 12) {
		cout<<(int)('M'-'A')+1<<endl<<char('A'+17);
		// 请自行完成问题 12 的代码
	} else if (T == 13) {
		double v=1064*4/3*PI;
		cout<<(int)pow(v,1.0*1/3);
		// 请自行完成问题 13 的代码
	} else if (T == 14) {
		cout<<50<<endl;
		// 请自行完成问题 14 的代码
	}
	return 0;
}
