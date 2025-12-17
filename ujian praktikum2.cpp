#include <iostream>
using namespace std;

int main() {
	const int bawah = 5;
	const int samping = 9;

	for (int r = 0; r < bawah; r++) {
		int garis = samping - r * 2;
		int spasi = (samping - garis) / 2;

		for (int s = 0; s < spasi; s++) cout << " ";
		for (int j = 0; j < garis; j++) cout << "'";
		cout << endl;
		}
		
	return 0;
}