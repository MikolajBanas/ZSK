#include <iostream>

using namespace std;

struct Date{
	int dd,mm,yyyy;
};

class Car{
	
	public:
		
		int id;
		string brand, model, color;
		unsigned short int power;
		float price;
		Date dateOfProduction;
		
		void getData();
		
		Car(){
			//MUSI BYĆ
		};
		Car(int id);
		Car(int id, string brand, string model);
		Car(int id, string brand, string model, string color);
		Car(int id, string brand, string model, string color, unsigned short int power, float price, Date dateOfProduction);
		
		/*Car(){
			
			cout << "Konstruktor si? wywo?a?!" << endl << endl;
			id = 420;
			brand = "Peugeot";
			model = "Cadre Allege";
			color = "Black";
			power = 1000;
			price = 265;
			dateOfProduction = {11,1,1978};
			
		}*/
	
};

Car::Car(int id){	
	
	Car::id = id;
	
}

Car::Car(int id, string brand, string model){
		
	Car::id = id;
	Car::brand = brand;
	Car::model = model;
	
}

Car::Car(int id, string brand, string model, string color){
	
	Car::id = id;
	Car::brand = brand;
	Car::model = model;
	Car::color = color;
	
}

Car::Car(int id, string brand, string model, string color, unsigned short int power, float price, Date dateOfProduction){
	
	Car::id = id;
	Car::brand = brand;
	Car::model = model;
	Car::color = color;
	Car::power = power;
	Car::price = price;
	Car::dateOfProduction = dateOfProduction;
	
}

void Car::getData(){
	
	cout << "Id: " << id << endl
		 << "Marka: " << brand << endl
		 << "Model: " << model << endl
		 << "Kolor: " << color << endl
		 << "Moc: " << power << "HP" << endl
		 << "Cena: " << price << "z?" << endl
		 << "Data produkcji: " << dateOfProduction.dd << "." << dateOfProduction.mm  << "." << dateOfProduction.yyyy << "r." << endl << endl; 
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Car peugeot(420, "Peugeot", "406", "Red", 132, 20000, {13,9,1995});
	
	peugeot.getData();
	
	Car honda;
	honda.getData();
	
	Car toyota(69, "Bąbel", "Yaris");
	toyota.getData();
	
	Car opel(11, "Opel", "Astra", "Pudrowa Róż");
	opel.getData();
	
	Car *zsk = &toyota;
	zsk -> getData();
	
	return 0;
}
