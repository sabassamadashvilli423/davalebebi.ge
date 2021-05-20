#include <iostream>
#include"kubi.h"
using namespace std;
int zedfart(kubi a) {
	return a.geta() * a.geta() * 6;
}
int fudzfart(int a) {
	return a * a;
}
int main()
{
	kubi a(5);
	cout << zedfart(a) << endl;
	cout << fudzfart(a.geta()) << endl;
	a.moculoba();
	a.seta(3);
	cout << zedfart(a) << endl;
	cout << fudzfart(a.geta())<<endl;
	a.moculoba();
}