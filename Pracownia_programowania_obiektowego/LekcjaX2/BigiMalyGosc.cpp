#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	
	setlocale(LC_CTYPE, "Polish");
	
	string txt;
	
	ofstream File;
	
	File.open("C:\\Users\\student\\Desktop\\plik.txt"); //ios::app nadpisuje
	
	if (File.is_open()) {
		
		cout << "Plik jest otwarty!";
		
		cout << endl << "Tekst: ";
		getline(cin, txt);
		
		File << txt;
		
		File.close();
		if (!File.is_open()) cout << "Plik jest zamkniêty!";
		else cout << "Nie uda³o siê zamkn¹æ pliku!";
		
	}
	else cout << "Nie uda³o siê otworzyæ pliku!";
	
	return 0;
	
}
