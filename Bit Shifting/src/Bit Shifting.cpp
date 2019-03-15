#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	unsigned char a = 0xFF;
	unsigned char r = 0x12;
	unsigned char g = 0x34;
	unsigned char b = 0x56;

	unsigned int color = 0;

	color += a;
	color <<= 8; // Shift left by 8 bits (1 byte)
	color += r;
	color <<= 8;
	color += g;
	color <<= 8;
	color += b;

	cout << uppercase << setfill('0') << setw(8) << hex << color << endl;

	return 0;
}
