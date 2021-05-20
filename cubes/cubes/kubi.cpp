#include "kubi.h"
#include<iostream>
using namespace std;
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
	cout << a * a * a<<endl;
	}
