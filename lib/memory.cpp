#include "memory.h"
#include <iostream>

void memory::OneArray_DynamicApply(int x)
{
	int* buf = new int[x];
	int i;

	/*���鸳ֵ*/
	for (i = 0; i < x; i++) {
		buf[i] = i * x;
	}

	/*��ӡ����*/
	for (i = 0; i < x; i++) {
		std::cout << "  buf[" << i << "]=" << *(buf + i);
	}

	/*�ͷ��ڴ�*/
	delete[] buf;
}

void memory::TwoArray_DynamicApply(int x, int y)
{
	int** buf;
	int i, j;

	/*�����ά�����ڴ�*/
	buf = new int* [x];  
	for (i = 0; i < x; i++) {
		buf[i] = new int[y];
	}

	/*���鸳ֵ*/
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			buf[i][j] = i * j;
		}
	}

	/*���ݴ�ӡ*/
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			if (j == 0) { std::cout << std::endl; }
			std::cout << buf[i][j] << "\t";
		}
	}

	/*�ͷ��ڴ�*/
	for (i = 0; i < x; i++) {
		delete[]buf[i];
	}
	delete[] buf;
}
