/* -------------------------- */
/* Penggunaan Variabel Statis */
/* -------------------------- */

#include <iostream>
#include <conio.h>

using namespace std;

/* Edited for Education by Rizky Khapidsyah */

void walah(); //--> prototipe fungsi walah

int main() {
	int k = 5;
	
	walah();
	walah();
	
	cout << "\nNilai K didalam fungsi main() = " << k;
	
	_getch();
	return 0;
}

void walah() {
	static int k; // --> deklarasi variabel statis
	k += 4;
	cout << "\nNilai K didalam fungsi() = " << k;
}