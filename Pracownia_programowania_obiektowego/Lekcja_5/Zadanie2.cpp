#include <iostream>

using namespace std;

class Room{
	
	public:
		float lenght, width, height;
		
		inline float area(){
			return lenght * width;
		}
		
		inline float volume(){
			return (lenght*width) * height;
		}
	
};

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Room room = {10,10,2.5};
	
	cout << "Powierzchnia pokoju wynosi: " << room.area() << "m2" << endl;
	cout << "Objêtoœc pokoju wynosi: " << room.volume() << "m3" << endl;
	
	return 0;
}
