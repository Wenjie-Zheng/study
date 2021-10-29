#pragma once
class file_stream
{
protected:
	char DataBuf[100];

public:
	file_stream() {
	}
	void file_write();
	void file_read();
};

