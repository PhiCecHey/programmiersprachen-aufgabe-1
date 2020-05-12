#include<iostream>
//#include<cmath>

using namespace std;

int kgv(int iNum) {
	bool suchen = true;
	for (int i = iNum; suchen; i += iNum) { //sucht kgv
		suchen = false;
		for (int j = 2; j < iNum; j++) { //geht Zahlen von 1-20 durch
			if (i % j != 0) {
				suchen = true;
				break;
			}
		}
		if (!suchen) {
			return i;
		}
	}
}

int main() {

	cout << kgv(20);

	return 0;
}