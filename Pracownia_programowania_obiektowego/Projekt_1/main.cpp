#include <iostream>

using namespace std;

class Worker{
	
	//deklaracja zmiennej cz�onkowskiej, s� to w�a�ciwo�ci.
	
	public: 
		//to deklaracja string name; definicja string name = "Marek"
	
		string name;
		string surname;
		unsigned short int age;
	
	//definicja funkcji cz�onkowskiej - metody.
	
	void showName(){
		cout << "Your name is " << name;
	}
	
	void typeName(){
		cout << "Type your name: ";
		cin >> name;
	}
	
};

int main(int argc, char** argv) {
	//polskie znaki.
	setlocale(LC_CTYPE, "Polish");
	
	//instancja klasy.
	
	Worker pracownik;
	//pracownik.name = "Marek Grzegorz";
	//pracownik.surname = "Nowak";
	//cout << pracownik.name;
	
	pracownik.typeName();
	
	pracownik.showName();
	
	return 0;
}
