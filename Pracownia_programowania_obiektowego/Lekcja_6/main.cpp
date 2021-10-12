#include <iostream>

using namespace std;

struct dateBirth{
	
	unsigned short int dd,mm,yyyy;
	
};

class Worker{
	
	public:
		
		string name, secondname, surname;
		dateBirth birthday;
	
		void showData();
	
};

void Worker::showData(){
	
	cout << "------- Worker data --------" << endl << endl
		 << "Imiê i Nazwisko: " << name << " " << secondname << " " << surname << endl
		 << "Data urodzenia: " << birthday.dd << "." << birthday.mm << "." << birthday.yyyy << endl << endl 
		 << "----------------------------" << endl;
	
}

int main(int argc, char** argv){
	
	setlocale(LC_CTYPE, "Polish");
	
	Worker worker{"Marek", "Grzegorz", "Nowak", {12, 8, 1966}};
	
	worker.showData();
	
	return 0;
}
