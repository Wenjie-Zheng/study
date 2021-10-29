#pragma once
#include <iostream>
class memory
{
public:
	memory() {
		std::cout << "Call constructor" << std::endl;
	}
	~memory() {
		std::cout << "Call destructor" << std::endl;
	}
	void OneArray_DynamicApply(int x);
	void TwoArray_DynamicApply(int x, int y);
};

