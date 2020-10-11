#pragma once
class Stack
{
private:
	int* size;
	int* elements;
public:
	Stack();
	~Stack();
	void Push(int value);
	int Pull();
	int Pop();
	void PrintElements();
};

