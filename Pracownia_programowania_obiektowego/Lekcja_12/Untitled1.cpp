#include <iostream>

using namespace std;

class Worker{
	
	private:
		
		double salary;
		unsigned short int birthYear;
	
	public:
		
		string surname, department;

		Worker();
		Worker(double salary, unsigned short int birthYear, string surname, string department);
		
		double netSalary();		
		double tax();
		void changeSalary(double newSalary);
		unsigned short int age();
		
		void showAllData();
	
};

Worker::Worker(double salary, unsigned short int birthYear, string surname, string department){
	
	Worker::salary = salary;
	Worker::birthYear = birthYear;
	Worker::surname = surname;
	Worker::department = department;
	
}

double Worker::netSalary(){
	
	return salary - (salary * 0.23);
	
}

double Worker::tax(){
	
	return 23;
	
}

void Worker::changeSalary(double newSalary){
	
	cout << endl << "Zmieniono pensjê z " << salary << " na " << newSalary << endl;
	
	salary = newSalary;
	
}

unsigned short int Worker::age(){
	
	return 2021 - birthYear;
	
}

void Worker::showAllData(){
	
	cout << endl << "Nazwisko: " << surname << endl
		 << "Dzia³: " << department << endl
		 << "Zarobek: " << salary << endl
		 << "Rok urodzenia: " << birthYear << endl;
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Worker marek = Worker(2500, 1951, "Nowak", "Zabawki");
	
	marek.showAllData();
	cout << endl << "Zarobek Netto Marka to: " << marek.netSalary() << endl;
	cout << endl << "Podatek Markowy to: " << marek.tax() << "%" << endl;
	marek.changeSalary(5000);
	marek.showAllData();
	cout << endl << "Wiek Mareczka to: " << marek.age() << endl;
	
	return 0;
	
}
