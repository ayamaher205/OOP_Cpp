#include <iostream>
using namespace std;
void swapReference(int& x, int& y); //swap two numbers by reference
void swapPointer(int* x, int* y);  //swap two numbers by pointer
void swapValue(int x, int y);   //swap two numbers by value but don't affect on original variables 
int main() {
    int x, y;
    cin >> x >> y;
    swapPointer(&x, &y);
    swapValue(x, y);
    swapReference(x, y);
    cout << x <<"   "<<  y;

	return 0;
}
void swapReference(int& x, int& y) {
    int temp = x;
    x = y;
    y = x;
}
void swapPointer(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = *x;
}
void swapValue(int x, int y) {
    int temp = x;
    x = y;
    y = x;
}