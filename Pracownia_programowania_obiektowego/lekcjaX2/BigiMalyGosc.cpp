#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	
	setlocale(LC_CTYPE, "Polish");
	
	string txt;
	
	ofstream File;
	
	File.open("plik.txt", ios::app); //ios::app nadpisuje
	
	if (File.is_open()) {
		
		cout << "Plik jest otwarty!" << endl;
		
		cout << "Tekst: ";
		getline(cin, txt);
		
		File << txt;
		
		File.close();
		if (!File.is_open()) cout << "Plik jest zamkni?ty!" << endl;
		else cout << "Nie uda?o si? zamkn?? pliku!" << endl;
		
	} else cout << "Nie uda?o si? otworzy? pliku!" << endl;
	
	ifstream File2;
	
	File2.open("plik.txt");
	
	if (File2.is_open()) {
		
		cout << "Plik jest otwarty!" << endl;
		
		while (getline(File2, txt)) cout << txt << "|" << endl;
		
		File2.close();
		if (!File.is_open()) cout << "Plik jest zamkni?ty!" << endl;
		else cout << "Nie uda?o si? zamkn?? pliku!" << endl;
		
	} else cout << "Nie udało się otworzyć pliku!" << endl;
	
	return 0;
	
}
