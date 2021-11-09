#include <iostream>

using namespace std;

class Worker{
	
	public:
		
		string name, surname;
		
		Worker();
		Worker(string pName, string pSurname);
		
		~Worker(){
			cout << endl << "Zdestruktorowano " << name << " " << surname << " :(" << endl;
		}
		
		void getData();
		void createNewWorker(string pName, string pSurname);
	
};

Worker::Worker(){
	
	cout << endl << "Konstruktor domy�lny" << endl;
	
}

Worker::Worker(string pName, string pSurname):

	name {pName},
	surname {pSurname}

{
	cout << endl << "Konstruktor parametryczny" << endl;
}

void Worker::getData(){
	
	cout << "Imi�: " << name << ", Nazwisko: " << surname << endl; 
	
}

void createNewWorker(string pName, string pSurname){
	
	Worker newWorker = Worker(pName, pSurname);
	newWorker.getData();
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Worker marek = Worker("Marek", "Nowak");
	marek.getData();
	
	Worker *p_marek = new Worker("Grzegorz", "Nowak");
	p_marek -> getData();
	
	delete p_marek; //Wska�nik nie usunie si� sam. Trzeba go wywo�a� r�cznie.
	
	createNewWorker("Marek", "Jeziora�ski");
	createNewWorker("Zjuju", "Nowak");
	
	return 0;
	
}
