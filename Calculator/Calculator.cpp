#include <iostream>

using namespace std;

int GetNextSum() {
	int valueA;
	int valueB;
	cout << "请连续输出 a 和 b 的值: " << endl;
	cin >> valueA >> valueB;
	return valueA + valueB;
}

int GetNextSub() {
	int valueA;
	int valueB;
	cout << "请连续输出 a 和 b 的值: " << endl;
	cin >> valueA >> valueB;
	return valueA - valueB;
}

int main()
{
	int value = 0;
	int select = 0;
	int time = 0;
	while (true) {
		cout << "请选择你的计算方式: " << endl << " 1. 加法" << endl << " 2. 减法" << endl;
		cin >> select;
		switch (select) {
		case 1:
			value = GetNextSum();
			break;
		case 2:
			value = GetNextSub();
			break;
		default:
			break;
		}

		time++;
		cout << "计算完成, 值为: " << value << endl << "已运行 " << time << " 次" << endl << endl;
	}
}