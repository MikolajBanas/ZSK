#include <iostream>

using namespace std;

class School{
	
	public:
		static string s_school;
		static string s_jobPosition;
		
		string name;
		string surname;
		
		
		void getData();
		void setNameSurname(string name, string surname);
		
		static string s_getSchool();
	
		static void s_setSchool(string school){
			s_school = school;
		}
	
};

string School::s_school = "ZSK - Zespó³ szkó³ komunikacji";
string School::s_jobPosition = "Student";

void School::getData(){
	
	cout << endl << "Imiê i nazwisko: " << name << " " << surname;
	
}

void School::setNameSurname(string name, string surname){
	
	School::name = name;
	School::surname = surname;
	
}

string School::s_getSchool(){
	
	return s_school;
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	School uczen;
	
	cout << "Szko³a: " << School::s_getSchool() << endl;
	cout << "Pozycja: " << School::s_jobPosition << endl;
	
	uczen.setNameSurname("Marek", "Sabiniewicz");
	uczen.getData();
	
	if(uczen.name == "Marek" && uczen.surname == "Sabiniewicz"){
		
		School::s_jobPosition = "Bóg!";
		
	}
	
	cout << endl << School::s_jobPosition;
	
	School:s_setSchool("ZSX");
	cout << School::s_school;
	return 0;
}
