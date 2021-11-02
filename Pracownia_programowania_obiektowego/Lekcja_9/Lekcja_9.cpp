#include <iostream>

using namespace std;

class Rectangle{
	
	private:
		
		double sideA;
		double sideB;
	
	public:
		
		Rectangle();
		Rectangle(double sideA, double sideB);
		
		//prototyp konstruktora kopiuj1cego
		Rectangle(const Rectangle &);
		
		void catchSides(double&, double&);
		void setSides(double sideA, double sideB);
		void getSides(){
			cout << "Bok A: " << sideA << endl;
			cout << "Bok B: " << sideB << endl;
		}
		
		double area();
		double circuit();
	
};

Rectangle::Rectangle(){
	
	cout << "Kontruktor domyœlny" << endl;
	
}

Rectangle::Rectangle(double sideA, double sideB){
	
	cout << "Kontruktor parametryczny" << endl;
	
	Rectangle::sideA = sideA;
	Rectangle::sideB = sideB;
	
}

Rectangle::Rectangle(const Rectangle& model){
	
	cout << "Kontruktor kopiuj¹cy" << endl;
	
	Rectangle::sideA = model.sideA;
	Rectangle::sideB = model.sideB;
	
}

void Rectangle::catchSides(double &sideA, double &sideB){
	
	sideA = Rectangle::sideA;
	sideB = Rectangle::sideB;
	
}

void Rectangle::setSides(double sideA, double sideB){
	
	Rectangle::sideA = sideA;
	Rectangle::sideB = sideB;
	
}

double Rectangle::area(){

	return sideA * sideB;

}

double Rectangle::circuit(){

	return 2 *sideA + 2 * sideB;

}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	double a, b;
	
	cout << "Prostok¹t 1:";
	Rectangle prostokat1(2, 4);
	prostokat1.getSides();
	
	cout << endl;
	
	cout << "Prostok¹t 2:";
	Rectangle prostokat2 = prostokat1;
	prostokat2.getSides();
	
	cout << endl;
	
	cout << "Prostok¹t 3:";
	Rectangle prostokat3 = prostokat2;
	prostokat3.getSides();
	prostokat3.catchSides(a, b);
	cout << "a: " << a << endl << "b: " << b << endl;
	
	return 0;
}

