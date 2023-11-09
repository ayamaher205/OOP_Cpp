#pragma once
#include<iostream>
using namespace std;
class Queue {
private:
	int size;
	int front;
	int rear;
	int *arr;
public:
	Queue();
	Queue(int _size) {
		rear = -1, front = -1;
		size = _size;
		arr = new int[size] {0};
	}
	int getsize() {
		return size;
	}
	void enqueue(int x) {
		if (!isFull()) {
			if (isEmpty()) {
				front++;
			}
			rear++;
			arr[rear] = x;
			cout << "added " << x << endl;
		}
		else {
			cout << "Sorry queue is full\n";
		}
	}
	void dequeue() {
		if (isEmpty()) {
			cout << "queue is Empty" << endl;
		}
		else {
			int x = arr[front];
			for (int i = front; i <= rear; i++) {
				arr[i] = arr[i + 1];
			}
				rear = rear - 1;
			cout << x << " Deleted" << endl;

		}

	}
	bool isFull(){
		if (rear == size - 1)
			return true;
		else
			return false;
	}
	bool isEmpty(){
		if (-1==front &&-1==rear)
			return true;
		else
			return false;
	}
	void display() {
		for (int i = front; i <= rear; i++) {
			cout << arr[i]<<" ";
		}
	}
	



};  //end class
