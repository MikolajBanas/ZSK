#include <iostream>

using namespace std;

class Animal{
	
	public:
		
		static int s_count;
		
		Animal(){
			s_count++;
			cout << endl << "Kontruktor madafaka" << endl;
		}
		
		~Animal(){
			s_count--;
			cout << endl << "Destruktor madafaka" << endl;
		}
	
};

int Animal::s_count = 0;

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Animal *tiger = new Animal();
	Animal *elephant = new Animal();
	
	delete tiger;
	delete elephant;
	
	cout << endl << "Iloœæ obiektów: " << Animal::s_count;
	
	return 0;
	
}
