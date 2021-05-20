#include <iostream>
#include<string>
using namespace std;
class bus;
class car {
	friend int sxvaoba(car c, bus b);
private: int speed,weight;
public:
	car() {

	}
	car(int speed,int weight) {
		this->weight = weight;
		this->speed = speed;
	}
	void print() {
		cout << weight << " " << speed << endl;
	}
};
class bus {
	friend int sxvaoba(car c, bus b);
private: int speed,weight;
public:
	bus() {

	}
	bus(int speed, int weight) {
		this->weight = weight;
		this->speed = speed;
	}
	void print() {
		cout << weight << " " << speed << endl;
	}
};
int sxvaoba(car c, bus b) {
	return c.speed - b.speed;
}
int main()
{
	car c(32, 600);
	c.print();
	bus b(12, 1200);
	b.print();
	cout<<sxvaoba(c, b)<<endl;

}