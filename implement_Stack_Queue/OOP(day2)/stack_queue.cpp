#include<iostream>
#include"queue.h"
#include"stack.h"
using namespace std;
int main() {
	Stack s(5);
	Stack s1 = s;
	s.pop();
	s.push_back(3);
	s.push_back(2);
	s.push_back(1);
	s.pop();
	s.pop();
	s.pop();
	s.push_back(5);
	s.push_back(6);
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s1.pop();
	s1.pop();
	cout << "\n";
	Queue q(5);
	Queue q1 = q;
	q.dequeue();
	q.enqueue(5);
	q.enqueue(7);
	q.enqueue(10);
	q.dequeue();
	q.dequeue();
	q.enqueue(11);
	q.dequeue();
	q.dequeue();



}