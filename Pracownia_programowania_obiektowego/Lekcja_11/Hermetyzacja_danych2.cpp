#include <iostream>

using namespace std;

class Rectangle{
	
	private:
		
		double sideA {0}, sideB {0};
		
	public:	
		
		Rectangle();
		Rectangle(double psideA, double psideB);
		
		void setSideA(double psideA);
		void setSideB(double psideB);
		double getSideA();
		double getSideB();
	
};

Rectangle::Rectangle(){
	
}

Rectangle::Rectangle(double psideA, double psideB){
	
	sideA = psideA;
	sideB = psideB;
	
}

void Rectangle::setSideA(double psideA){
	
	sideA = psideA;
	
}

void Rectangle::setSideB(double psideB){
	
	sideB = psideB;
	
}

double Rectangle::getSideA(){

	return sideA;
	
}


double Rectangle::getSideB(){

	return sideB;
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	double width = 10, height = 20;
	
	Rectangle p1;
	cout << p1.getSideA() << endl;
	
	Rectangle p2;
	p2.setSideA(width);
	p2.setSideB(height);
	cout << p2.getSideA() << ", " << p2.getSideB() << endl;

	return 0;
	
}
