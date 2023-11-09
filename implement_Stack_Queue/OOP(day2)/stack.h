#pragma once
#include<iostream>
using namespace std;
class Stack {
private:
	int size;
	int top;
	int* arr;
public:
	int getsize() {
		return size;
	}
	Stack();
	Stack(int _size) {
		top = -1;
		size = _size;
		arr = new int[size] {0};
	}
	void push_back(int x) {
		if (!isFull()) {
			top++;
			arr[top] = x;
			cout << "added " << x << endl;
		}
		else {
			cout << "Sorry stack is full\n";
		}
	}
	void pop() {
		if (!isEmpty())
		{
			cout << arr[top] << " Deleted" << endl;
			top--;
		}
		else {
		cout << "sorry stack is empty" << endl;
		}
	}
	bool isFull() {
		if (top == size - 1)
			return true;
		else
			return false;
	}
	bool isEmpty() {
		if (top == -1)
			return true;
		else
			return false;

	}
	void display() {
		for (int i = 0; i <=top; i++)
			cout << arr[i] << " ";
	}
}; //end class
