#include <iostream>

using namespace std;

class Worker{
	
	public:
		
		unsigned int id {420};
		string name {"Janina"}, surname {"B¹bel"};
		
		void getData();
		
		//Worker();
		Worker(int id = 589, string name = "Specyfikcja", string surname = "Musi byæ");
	
};

void Worker::getData(){
	
	cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl 
		 << "                 Dane                " << endl << endl
		 << "Id: " << id << endl
		 << "Imiê: " << name << endl
		 << "Nazwisko: " << surname << endl
		 << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	
}

/*Worker::Worker(){
	
	cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl 
		 << "Zosta³ wywo³any konstrutktor domyœlny" << endl
		 << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	
	id = 69;
	name = "Marek";
	surname = "Nowak";
	
}*/

Worker::Worker(int id, string name, string surname){
	
	Worker::id = id;
	Worker::name = name;
	Worker::surname = surname;
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Worker spec = Worker();
	spec.getData();	
	
	Worker mareczek = Worker(69, "Marek", "Nowak");
	mareczek.getData();
	
	Worker nicola = Worker(1234, "Nicola");
	nicola.getData();
	
	return 0;
}
