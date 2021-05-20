#include "kubi.h"
using namespace std;
#include<iostream>
kubi::kubi() {

}
kubi::kubi(int a) {
	this->a = a;
}
void kubi::seta(int a) {
	this->a = a;
}
int kubi::geta() {
	return this->a;

}
void kubi::moculoba() {
	cout << a * a * a << endl;
}
void kubi::zedfart() {
	cout << a * a * 6 << endl;
}
void kubi::fudzfart() {
	cout << a * a << endl;
}
