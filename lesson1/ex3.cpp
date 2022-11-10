#include <iostream>

using namespace std;

class Stack 
{
private:
	int mass[10];
	int sc;


public:
	void reset() {
		for (int i = 0; i < 10; i++) {
			mass[i] = 0;
		}
		sc = 0;
	}
	void print() {
		int score;
		score = sc;
		cout << "( ";
		while (score != 0) {
			cout << mass[sc - score] << " ";
			score--;
		}
		cout << ")" << endl;

	}


	bool push(int a) {
		if (sc <= 10) {
			mass[sc] = a;
			sc++;
			return true;
		}
		else return false;
	}


	int pop() {
		if (sc == 0) {
			cout << "stack is empty" << endl;
			return 0;
		}
		sc--;
		return mass[sc + 1];
	}


};

int main()
{
	Stack stack;
	stack.reset();
	stack.print();

	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();
	stack.print();

	return 0;
}
