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
		
		Car(int, string, string, string, unsigned short int, float, Date);
		
		/*Car(){
			
			cout << "Konstruktor siê wywo³a³!" << endl << endl;
			id = 420;
			brand = "Peugeot";
			model = "Cadre Allege";
			color = "Black";
			power = 1000;
			price = 265;
			dateOfProduction = {11,1,1978};
			
		}*/
	
};

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
		 << "Cena: " << price << "z³" << endl
		 << "Data produkcji: " << dateOfProduction.dd << "." << dateOfProduction.mm  << "." << dateOfProduction.yyyy << "r." << endl; 
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Car peugeot(420, "Peugeot", "406", "Red", 132, 20000, {13,9,1995});
	
	peugeot.getData();
	
	return 0;
}
