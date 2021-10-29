#include "file_stream.h"
#include <iostream>
#include <fstream>

using namespace std;

void file_stream::file_write()
{
	ofstream outfile;

	outfile.open("afile.dat");
	cout << "\r\nwriting to the file..." << endl;
	cin.getline(DataBuf, 100);

	outfile << DataBuf << endl;
	outfile.close();
}

void file_stream::file_read()
{
	ifstream infile;

	infile.open("afile.dat");
	cout << "reading from the file..." << endl;
	infile >> DataBuf;

	cout << "data is: " << DataBuf << endl;
	infile.close();
}
