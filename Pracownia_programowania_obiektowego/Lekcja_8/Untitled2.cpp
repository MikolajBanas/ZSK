#include <iostream>

using namespace std;

class Worker{
	
	const int id = 0;
	string name, surname;
	
	public:
		
		Worker();
		Worker(int id, string name, string surname);
		
		void getData();
		
	
};

Worker::Worker(): id {-1}, name {"Imiê domyœlne"}, surname {"Nazwisko domyœlne"}{

	cout << "Konstruktor domyœlny" << endl;

}

Worker::Worker(int pid, string pname, string psurname): id {pid}, name {pname}, surname {psurname}{

	cout << "Konstruktor parametryczny" << endl;

}
	
void Worker::getData(){
	
	cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl 
		 << "                 Dane                " << endl << endl
		 << "Id: " << id << endl
		 << "Imi?: " << name << endl
		 << "Nazwisko: " << surname << endl
		 << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Worker nowak;
	nowak.getData();
	
	Worker zjuju(1, "Jerzy", "Sabiniewicz");
	zjuju.getData();
	
	Worker nowak1(12, "Marek", "Nowak");
	nowak1.getData();
	
	Worker zjuju11 = Worker(11, "Jerzy", "Sabiniewicz");
	zjuju11.getData();
	
	return 0;
}
