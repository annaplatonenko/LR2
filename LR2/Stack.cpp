#include <iostream>
#include "Stack.h"

Stack::Stack()
{
	this->size = new int(0);
	this->elements = new int[0];
}

Stack::~Stack()
{
	delete size;
	delete[] elements;
}

void Stack::Push(int value)
{
	int* buff = new int[*(this->size) + 1];
	for (int i = 0; i < *size; i++)
	{
		buff[i] = this->elements[i];
	}
	buff[*size] = value;
	delete[] elements;
	elements = buff;
	(*size)++;
}

int Stack::Pop()
{
	if (*size <= 0)
		return 0;

	int result = elements[*size - 1];
	int* buff = new int[*size - 1];
	for (int i = 0; i < *size - 1; i++)
	{
		buff[i] = elements[i];
	}
	delete[] elements;
	elements = buff;
	(*size)--;
	return result;
}

int Stack::Pull()
{
	if (*size <= 0)
		return 0;

	return elements[(*size) - 1];
}

void Stack::PrintElements()
{
	for (int i = 0; i < *size; i++)
	{
		std::cout << elements[i] << " ";
	}
}