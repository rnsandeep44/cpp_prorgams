#include <iostream>
#include <string>
#include "rectangle.h"



int main(){

	Rectangle r = Rectangle(10.0, 5.0);

	double area = r.compute_area();
	double perimeter = r.compute_perimeter();

	std::cout << "compute perimeter: "<< perimeter << "compute area: " << area;

}


