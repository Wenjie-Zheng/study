#include "memory.h"
#include <iostream>

void memory::OneArray_DynamicApply(int x)
{
	int* buf = new int[x];
	int i;

	/*数组赋值*/
	for (i = 0; i < x; i++) {
		buf[i] = i * x;
	}

	/*打印数据*/
	for (i = 0; i < x; i++) {
		std::cout << "  buf[" << i << "]=" << *(buf + i);
	}

	/*释放内存*/
	delete[] buf;
}

void memory::TwoArray_DynamicApply(int x, int y)
{
	int** buf;
	int i, j;

	/*申请二维数组内存*/
	buf = new int* [x];  
	for (i = 0; i < x; i++) {
		buf[i] = new int[y];
	}

	/*数组赋值*/
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			buf[i][j] = i * j;
		}
	}

	/*数据打印*/
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			if (j == 0) { std::cout << std::endl; }
			std::cout << buf[i][j] << "\t";
		}
	}

	/*释放内存*/
	for (i = 0; i < x; i++) {
		delete[]buf[i];
	}
	delete[] buf;
}
