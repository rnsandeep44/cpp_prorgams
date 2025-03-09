#ifndef RECTANGLE_H
#define RECTANGLE_H
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


#endif // RECTANGLE_H

