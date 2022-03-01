#include <iostream>

using namespace std;

//klasa abstrakcyjna
class Character{
	public:
		string name;
		virtual	void go() = 0;
		virtual void stop() = 0;	
};

class Human : public Character{
	public:
		void go() {
			cout << "Cz�owiek idzie\n";
		}
		void stop() {
			cout << "Cz�owiek zatrzymuje si�\n";
		}		
};

class Bear : public Character{
	public:
		void go() {
			cout << "Niedzielski idzie\n";
		}
		void stop() {
			cout << "Niedzielski zatrzymuje si�\n";
		}
};

class SuperHero : public Character{
	public:
		void go() {
			cout << "Morawiecki idzie\n";
		}
		void stop() {
			cout << "Morawiecki zatrzymuje si�\n";
		}
};

int main() {
	
	setlocale(LC_CTYPE, "polish");
	
	/*Character postac;
	postac.go();

	Human czlowiek;
	czlowiek.go();
	czlowiek.stop();*/
	
	Bear niedzwiedz;
	niedzwiedz.go();
	niedzwiedz.stop();

	/*Character *bohater = new Human();
	bohater -> go();
	bohater -> stop();
	
	bohater = new Bear();
	bohater -> go();
	bohater -> stop();*/

	SuperHero bigi;
	Character *wsk = &bigi;
	wsk -> go();
	
	wsk = &niedzwiedz;
	wsk -> stop();

	return 0;
	
}
