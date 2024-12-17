#include "Polynomial.h"

int main()
	{
	Polynomial a, b, c, d, e;
	a.read();
	b.read();
	c.add(a, b);
	d.sub(a, b);
	e.mult(a, b);
	a.display("a = ");
	b.display("b = ");
	c.display("a+b = ");
	d.display("a-b = ");
	e.display("A*B = ");
	}