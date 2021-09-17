#include <iostream>
using namespace std;

class Animal {
	public:
		string species, animalKingdom, name, gender;
		bool hasFur, eatsMeat, isDangerous;
		unsigned short int birthYear;
		float weight;
		
		void pet();
		void feed();
		void kill(Animal target);
		
		void printStats();
};

void Animal::pet() {
	if (!isDangerous) {
		cout << "Udało się oswoić." << endl;
	} else {
		cout << "Nie udało się oswoić." << endl;
	}
}

void Animal::feed() {
	if (eatsMeat) {
		cout << "*zjada mięso*" << endl;
	} else {
		cout << "*zjada liścia*" << endl;
	}
}

void Animal::kill(Animal target) {
	if (isDangerous && target.isDangerous) {
		cout << "Oboje zgineli ;(" << endl;
	} else if (!isDangerous && !target.isDangerous) {
		cout << "Doszli do porozimienia i zostali psiapsi." << endl;
	} else {
		if (isDangerous) {
			cout << name << " wygrał!";
		} else {
			cout << target.name << " wygrał!";
		}
	}
}

void Animal::printStats() {
	cout 	<< "--- " << name << " ---" << endl
			<< "Gatunek: " << species << endl
			<< "Królestwo: " << animalKingdom << endl
			<< "Płeć: " << gender << endl
			<< "Rok urodzenia: " << birthYear << endl
			<< "Ma futro: " << hasFur << endl
			<< "Je mięso: " << eatsMeat << endl
			<< "Jest niebezpieczny: " << isDangerous << endl;
}

int main() {
	setlocale(LC_CTYPE, "Polish");
	
	Animal bob;
	Animal leo;
	
	bob.species = "Cat";
	bob.animalKingdom = "Mammal";
	bob.name = "Bob";
	bob.gender = "NB";
	bob.birthYear = 2019;
	bob.weight = 5.25;
	bob.hasFur = true;
	bob.eatsMeat = false;
	bob.isDangerous = false;
	
	leo.species = "Cat";
	leo.animalKingdom = "Mammal";
	leo.name = "Leo";
	leo.gender = "M";
	leo.birthYear = 2017;
	leo.weight = 12;
	leo.hasFur = true;
	leo.eatsMeat = false;
	leo.isDangerous = false;
	
	bob.printStats();
	cout << endl;
	leo.printStats();
	cout << endl;
	
	while (true) {
		string q;
		
		cout << "Jaką akcję chcesz wykonać?" << endl << ">";
		
		cin >> q;
		
		if (q=="pet"){
			bob.pet();
		} else if (q=="feed"){
			bob.feed();
		} else if (q=="kill"){
			bob.kill(leo);
		} else {
			cout << "Bob nie zna takiej komendy!!" << endl;
		}
		
		cout << endl;
	}

	return 0;
}
