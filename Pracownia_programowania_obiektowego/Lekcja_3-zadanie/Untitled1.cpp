#include <iostream>

using namespace std;

class Rectangle{
	
	public:

		float a;
		float b;
	
	float calculate_field();
	float calculate_perimeter();
	float showInfo();
	
};

float Rectangle::calculate_field(){
	
	float calculate;
	
	calculate = a * b;
	
	return calculate;
	
}

float Rectangle::calculate_perimeter(){
	
	float calculate;
	
	calculate = 2*a + 2*b;
	
	return calculate;
	
}

float Rectangle::showInfo(){
	
	cout << endl << "Dlugoœci boków to: " << a << " oraz " << b << endl;
	cout << "Pole wynosi: " << calculate_field() << endl;
	cout << "Obwód wynosi: " << calculate_perimeter() << endl;
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Rectangle rectangle;
	
	while(true){
		
		cout << "Podaj a: ";
		cin >> rectangle.a;
		
		if(rectangle.a != 0){
			break;
		}else{
			cout << endl << "Wpisz poprawn¹ wartoœæ!" << endl << endl;
			
		}
		
	}
	
	while(true){
		
		cout << "Podaj b: ";
		cin >> rectangle.b;
		
		if(rectangle.b != 0){
			break;
		}else{
			cout << endl << "Wpisz poprawn¹ wartoœæ!" << endl << endl;
			
		}
		
	}
	
	rectangle.showInfo();
	
	return 0;
}

