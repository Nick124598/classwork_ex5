#include "shape.h"
#include "triangle.h"
#include <iostream>


int main() 
{
	Triangle triangle(2, 10);
	std::cout << "The area of the triangle is " << triangle.get_area() << std::endl;

	Triangle* pTriangle = new Triangle(2, 10);		//this is down-casting, which makes it go to the function of shapes instead of triangle, so I changed the shape to be a triangle.
	std::cout << "The area of the triangle is " << pTriangle->get_area() << std::endl;
	delete pTriangle;

	return 0;
}
