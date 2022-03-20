/*#include<iostream>
using namespace std;
int main() {
	int i;
	cout << "moi nhap i"; cin >> i;
	if (i == 2) {
		cout << "monday";
	}
	if (i == 3) {
		cout << "tuesday";
	}
	if (i == 4) {
		cout << "Wendnsday";
	}
	if (i == 5) {
		cout << "thursday";
	}
	if (i == 6) {
		cout << "friday";
	}
	if (i == 7) {
		cout << "saturday";
	}
	else {
		cout << "bạn đã nhap sai ";
	}
	return 0;
}*/
#include<iostream>
using namespace std;
int main() {
	int sodien;
	cout << "moi nhap so dien :"; cin >> sodien;
	int dongia;

	if (sodien < 100) {
		dongia = 2 * sodien;
	}else
	if (sodien < 200) {
		dongia = 2, 5 * sodien;
	}else
	if (sodien < 300) {
		dongia = 3 * sodien;
	}else
	if (sodien > 300) {
		dongia = 5 * sodien;
	}


	cout << "sotien dien la :" << dongia <<" nghin dong "<< endl;
	return 0;
}