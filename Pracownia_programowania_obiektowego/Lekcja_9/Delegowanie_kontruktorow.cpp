#include <iostream>

using namespace std;

class Rectangle{
	
	private:
		
		double sideA;
		double sideB;
		string color;
	
	public:
		
		Rectangle();
		Rectangle(double sideA, double sideB);
		
		void setColor(string color);
		void getData();
	
};

Rectangle::Rectangle(){
	
	cout << "Kontruktor domyœlny" << endl;
	
	setColor("White");
	
}

Rectangle::Rectangle(double sideA, double sideB){
	
	cout << "Konstruktor parametryczny" << endl;
	
	Rectangle::sideA = sideA;
	Rectangle::sideB = sideB;
	
	setColor("White");
	
}

void Rectangle::getData(){
	
	cout << endl
		 << "Bok A: " << sideA << endl
		 << "Bok B: " << sideB << endl
		 << "Kolor: " << color << endl
		 << endl;
	
}

void Rectangle::setColor(string color){
	
	Rectangle::color = color;
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Rectangle p1;
	p1.getData();
	
	Rectangle p2(6, 9);
	p2.getData();
	
	Rectangle p3(9, 6);
	p3.setColor("Ruziowy");
	/* p3.color = "Beziowy"*/
	p3.getData();
	
	return 0;
}

