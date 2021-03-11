#include<iostream>
using namespace std;

int main() {
	char c[100];
	cout << "문자열 입력>>";
	cin.getline(c, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (c[i] == '\0') {
			break;
		}
		else {
			for (int j = 0; j <= i; j++) {
				cout << c[j];
			}
		}
		cout << "\n";
	}
}
