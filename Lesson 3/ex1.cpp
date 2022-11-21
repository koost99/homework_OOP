#include <iostream>
#include <cmath>
using namespace std;

class Figure
{
public:
	virtual void Area(float a) = 0;
	virtual ~Figure(){}
};

class Circle : public Figure {
	float diam;
public:
	Circle(float _a = 0) : diam(_a * 2) {}
	void Area(float diam) {
		cout << diam * 3.1415 << endl;
	}
	~Circle(){}
};

class Parallelogram : public Figure 
{
public:
	virtual void Area(float a, float b) = 0;
	virtual ~Parallelogram(){}
};

class Rectangle : public Parallelogram {
private:
	float dlin;
	float shir;
public:
	Rectangle(float _a =0, float _b =0): dlin(_a), shir(_b){}
	virtual ~Rectangle(){}
	void Area(float dlin, float shir) {
		cout << dlin * shir << endl;
	}
};

class Square : public Parallelogram {
	float stor;
public:
	Square(float _a = 0) :stor(_a){}
	~Square(){}
	void Area(float stor) {
		cout << stor * stor << endl;
	}
};

class Rhombus : public Parallelogram {
	float stor;
	float ug;
public:
	Rhombus(float _b = 0, float _q = 90): stor(_b), ug(_q) {}
	~Rhombus(){}
	void Area(float stor, float ug) {
		cout << stor * cos(ug * 3.1415 / 180) << endl;
	}
};


void main() {}
