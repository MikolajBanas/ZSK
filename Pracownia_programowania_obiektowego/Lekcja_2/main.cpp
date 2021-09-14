#include <iostream>

using namespace std;

class Worker{
	
	//deklaracja zmiennej cz³onkowskiej, s¹ to w³aœciwoœci.
	
	public: 
		//to deklaracja string name; definicja string name = "Marek"
	
		string name;
		string surname;
		string nationallity;
		unsigned short int birthYear;
		char gender;
		float height;
	
	//deklaracja metody prototyp
	
	void showPersonallity();
	void showSurname();
	void showAllData();
	
};

//definicja metody

void Worker::showSurname(){
	
	cout << "Your surname is: " << surname << endl;
	
}

void Worker::showPersonallity(){
	
	cout << "Your name and surname are: " << name << " " << surname << endl;
	
}

void Worker::showAllData(){
	
	cout << "Your nationallity is: " << nationallity << endl;
	cout << "Your age is: " << 2021-birthYear << endl;
	cout << "Your height is: " << height << endl;
	
}

int main(int argc, char** argv) {
	//polskie znaki.
	setlocale(LC_CTYPE, "Polish");
	
	//instancja klasy.
	
	Worker pracownik;
	pracownik.name = "Marek Grzegorz";
	pracownik.surname = "Nowak";
	pracownik.gender = 'M';
	pracownik.nationallity = "Poland";
	pracownik.birthYear = 1953;
	pracownik.height = 178;
	
	pracownik.showSurname();
	pracownik.showPersonallity();
	pracownik.showAllData();
	
	return 0;
}
