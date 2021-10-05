#include <iostream>

using namespace std;

class Worker{
	
	public:
		string name, surname;
		
		void getData();
	
};

void Worker::getData(){
	
	cout << "Imiê i nazwisko: " << name << " " << surname << endl;
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Worker worker{"Janusz", "Kowalski"};
	Worker *p_worker;
	p_worker = &worker;
	
	worker.getData();
	
	cout << "Adres obiektu worker: " << p_worker << endl;
	
	p_worker -> name = "Grzesiu";
	p_worker -> surname = "Nowak";
	
	//worker.getData();
	p_worker -> getData();
	
	return 0;
}
