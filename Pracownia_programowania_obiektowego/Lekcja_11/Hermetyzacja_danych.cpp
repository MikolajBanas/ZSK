#include <iostream>

using namespace std;

class Rectangle{
	
	public:
		
		double sideA {0}, sideB {0};
		
		Rectangle();
		Rectangle(double psideA, double psideB);
		
		void getSides();
	
};

Rectangle::Rectangle(){
	
}

Rectangle::Rectangle(double psideA, double psideB){
	
	sideA = psideA;
	sideB = psideB;
	
}

void Rectangle::getSides(){
	
	cout << endl <<  "Bok A: " << sideA << endl
		 << "Bok B: " << sideB << endl;
	
}

void getSides(double a, double b){
	
	cout << endl << "Bok A: " << a << endl
		 << "Bok B: " << b << endl;
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	double width = 10, height = 20;
	
	getSides(width, height);
	
	Rectangle p(5, 10);
	p.getSides();
	
	Rectangle p2(width, height);
	p2.getSides();
	
	return 0;
	
}
