#include "MyLib.h"
#include <Windows.h>
void 打印数量(int a) {
	cout << "数量: " << a << endl;
}

int main() {
	intptr_t 打印数量CALL = 打印数量;
}