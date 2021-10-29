#include <iostream>
#include "file_stream.h"
#include "memory.h"
#include "fun_temp.h"

using namespace std;

/*命名空间定义*/
namespace first_space {
	void print() {
		cout << "Inside first space" << endl;
	}
}

namespace second_space {
	void print() {
		cout << "Inside second space" << endl;
	}
}

/*函数模板*/
template <typename test>
inline test Max(test x, test y) {
	return x > y ? x : y;
}

int main(void)
{
	file_stream file;
	memory* Mbuf = new memory[5];

	int a = 5, b = 3;
	float c = 3.1, d = 4.5;
	string e = "hello", f = "hello word";
	cout << Max(a, b) << endl;
	cout << Max(c, d) << endl;
	cout << Max(e, f) << endl;

	first_space::print();
	second_space::print();

	Mbuf[1].OneArray_DynamicApply(5);
	Mbuf[2].TwoArray_DynamicApply(5, 10);
	delete[] Mbuf;

	while (true)
	{
		file.file_write();
		file.file_read();
	}

	return 0;
}