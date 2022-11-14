#include <string>
#include <iostream>

using namespace std;
class Fruit {
private:
	string name;
	string color;
public:
	Fruit(string _name = "", string _color = "") : name(_name), color(_color) {}
	string getName() {
		return name;
	}
	string getColor() {
		return color;
	}
	
	~Fruit() {}
};


class Apple:public Fruit {
public:
	Apple(string _color = "", string _name = "Apple") : Fruit(_name, _color) {}
	~Apple() {}
};


class GrannySmith :public Apple {
public:
	GrannySmith(string _name = "Granny Smith Apple", string _color = "yellow") :  Apple(_color, _name) {}


};

class Banana :public Fruit {
public:
	Banana(string _name = "Banana", string _color = "Yellow") : Fruit(_name, _color) {}
};







int main() {
	Apple a("red");
	Banana b;
	GrannySmith c;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

	return 0;
}
