#include <iostream>
#include "file_stream.h"
#include "memory.h"

using namespace std;

int main(void)
{
	memory buf;
	file_stream file;

	memory* Mbuf = new memory[5];
	Mbuf[1].OneArray_DynamicApply(5);
	Mbuf[2].TwoArray_DynamicApply(5, 10);
	delete[] Mbuf;

	buf.OneArray_DynamicApply(8);
	buf.TwoArray_DynamicApply(5, 10);
	while (true)
	{
		file.file_write();
		file.file_read();
	}

	return 0;
}