#include <iostream>
#include"kubi.h"
using namespace std;
int main()
{
	int t;
	kubi a(5);
	a.fudzfart();
	a.zedfart();
	a.moculoba();
	t = rand() % 5;
	a.seta(t);
	a.fudzfart();
	a.zedfart();
	a.moculoba();
	if (t < 5) {
		t = 5;
	}
	a.seta(t);
	a.fudzfart();
	a.zedfart();
	a.moculoba();
}