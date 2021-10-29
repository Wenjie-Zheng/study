#include <iostream>
#include "file_stream.h"

using namespace std;

int main(void)
{
	file_stream file;

	while (true)
	{
		cout << "first modify" << endl; 
		file.file_write();
		file.file_read();
	}

	return 0;
}