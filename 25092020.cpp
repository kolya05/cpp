#include <iostream>
#include <list>

using namespace std;

class Point
{
public:
	int x;
	int y;
};

class Rectangle
{
public:
	Point vertex;
	int width;
	int length;
	
	int square()
	{
		return this->width * this->length;
	}
};

int square(Rectangle r)
{
	return r.length * r.width;
}

int commonSquare(Rectangle r1, Rectangle r2)
{
	return 0;
}

int main()
{
	Point a;
	a.x = 1;
	a.y = 2;

	Rectangle r;
	r.vertex = a;
	r.length = 3;
	r.width = 5;

	cout << r.square() << " " << square(r);

	return 0;
}
