#include <iostream>

using namespace std;

struct Date{
	
	unsigned short int dd, mm, yyyy;
	
};

struct Student{
	
	string name, surname;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatics[5];
	
};

float calculateAverage(unsigned short int grades[]){
	
	float sum = 0,num = 0, average;
	
	for(int i = 0; i < 5; i++){
		sum += grades[i];
		num++;
	}
	
	average = sum / num;
	
	return average;
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Student Sabiniewicz{"Je¿y", "Sabiniewicz", 1, {11,1,2006}, {6,6,6,6,6}};
	
	cout << "Imiê i Nazwisko: " << Sabiniewicz.name << " " << Sabiniewicz.surname << endl <<
			"Id: " << Sabiniewicz.id << endl <<
			"Data urodzenia: " << Sabiniewicz.dateBirthday.dd << "." << Sabiniewicz.dateBirthday.mm << "." << Sabiniewicz.dateBirthday.yyyy << endl <<
			"Œrednia ocen: " << calculateAverage(Sabiniewicz.gradeInformatics);
	
	return 0;
}

