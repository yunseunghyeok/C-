#include<iostream>
#include<string>
using namespace std;

int main() {
	int num = 0;
	char c[100];
	cout << "문자들을 입력하라(100개 미만).";
	cin.getline(c, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (c[i] == 'x')
			num++;
		else if (c[i] == '\n')
			break;
	}
	cout << "x의 개수는 " << num << "\n";
}
