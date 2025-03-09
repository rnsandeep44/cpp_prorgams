#include <iostream>
#include <string>

class Rectangle {
	private:
		double length;
		double width;

	public:

		Rectangle(double l, double w) {
			 length = l;
			 width = w;
		 }

		void set_length(double length){
		     length = length;
		    }
		void set_width(double width){
			width = width;
			}

		double compute_area(){
			return length*width;
		}

		double compute_perimeter(){
			return 2*(length+width);
		}
};



int main(){

	Rectangle r = Rectangle(10.0, 5.0);

	double area = r.compute_area();
	double perimeter = r.compute_perimeter();

	std::cout << "compute perimeter: "<< perimeter << "compute area: " << area;

}


