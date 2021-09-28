#include <iostream>

using namespace std;

struct Date{
	
	unsigned short int dd, mm, yyyy;
	
};

struct Worker{
	
	public:
		
		unsigned short id {};
		string name {}, surname {};
		Date dateBirthday {};
		
		void showAllData();
		void setData(unsigned int id, string name, string surname, Date dateBirthday);
	
};

void Worker::showAllData(){
	
	cout << "---------Dane--------- " << endl
			 << "Id pracownika: " << id << endl
			 << "Imiê i nazwisko: " << name << " " << surname << endl
			 << "Data urodzenia: " << dateBirthday.dd << "." << dateBirthday.mm << "." << dateBirthday.yyyy << "r." << endl;
	
}

void Worker::setData(unsigned int id, string name, string surname, Date dateBirthday){
	
	Worker::id = id;
	Worker::name = name;
	Worker::surname = surname;
	Worker::dateBirthday = dateBirthday; 
	   
}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Worker bombel;
	bombel.setData(1, "B¹bel", "Banaœ", {3,9,2017});
	
	bombel.showAllData();
	
	return 0;
}


