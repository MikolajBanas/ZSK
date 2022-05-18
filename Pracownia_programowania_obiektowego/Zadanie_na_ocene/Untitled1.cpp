#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;

class Rec {
	public:
		double a, b;
		
		double calculateField() {
			return a * b;
		}
		
		Rec(double a1, double b1) {
			a = a1;
			b = b1;
		}
	
};

class Person {
	
	public:
		string name = "Miko³aj", surname = "Banaœ";
		
		void getName() {
			cout << "Imiê: " << name << ", Nazwisko: " << surname << endl;
		}
	
};

class Totolotek {
	public:
		
		void losuj() {
			
			int liczby[6], lottery[6], win=0;
			
			srand(time(NULL));
			
			cout << "Podaj liczby: " << endl;
			
			for(int i = 0; i < 6; i++) {
				cout << ">";
				cin >> liczby[i];	
			}
			
			cout<<"Liczby kumulacji: "<<endl;
			
			for(int j = 0; j < 6; j++){
				lottery[j] = 1+rand()%(49-1+1);
				cout<< ">" << lottery[j] << endl;
			}
			
			cout << endl << "Trafi³eœ: ";
			for(int k = 0; k < 6; k++){
				if (lottery[k] == liczby[k]) {
					cout << "> " << k;
					win++;	
				}
			}
			
			cout << endl << "Trafi³eœ " << win << " liczb!" << endl;
			
		}
	
};

int main() {
	
	setlocale(LC_CTYPE, "Polish");
	
	int w;
	while (true) {
	
		system("cls");
	
		cout << "Menu: " << endl
		 << "0 - wyjœcie" << endl
		 << "1 - pole prostok¹ta" << endl
		 << "2 - tekst" << endl
		 << "3 - totolotek";
		 
		cout << endl << ">";
		cin >> w;
		
		switch (w) {
			
			case 0:
				return 0;
				break;
				
			case 1:
				{
					system("cls");
					
					double a, b;
					
					cout << "Podaj a: ";
					cin >> a;
					
					cout << "Podaj b: ";
					cin >> b;
					
					if (a < 0 || b < 0) break;
					
					Rec rectangle(a, b);
					
					cout << "Pole prostok¹ta to " << rectangle.calculateField() << endl;
					
					system("pause");
					break;
				}
			
			case 2:
				{
					system("cls");
					
					Person person; 
					person.getName();
					
					system("pause");
					break;	
				}
			
			case 3:
				{
					system("cls");
					
					Totolotek totolotek;
					totolotek.losuj();
					
					system("pause");
					break;
				}
				
			default:
				break;
			
		}
		
	}
	
	return 0;
	
}
