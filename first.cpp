#include <iostream>
using namespace std;
int main() {
	int** p;
	int hang, lie, i, j;
	cin >> lie;
	cin >> hang;
	p = new int* [hang];
	for (i = 0; i < hang; i++) {
		*(p + i) = new int[lie];
	}
	for (j = 0; j < hang; j++) {
		for (i = 0; i < lie; i++) {
			cin >> *(*(p + i) + j);
		}
	}
	cout << "δת��ǰ��" << endl;
	for (j = 0; j < hang; j++) {
		for (i = 0; i < lie; i++) {
			cout << *(*(p + i) + j) << "   ";
		}
		cout << endl;
	}
	cout << "ת�ú���" << endl;
	for (j = 0; j < lie; j++) {
		for (i = 0; i < hang; i++) {
			cout << *(*(p + j) + i) << "   ";
		}
		cout << endl;
	}
}