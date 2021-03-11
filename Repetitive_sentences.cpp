#include<iostream>
#include<string>
using namespace std;

int main() {
	cout << "종료하고 싶으면 yes를 입력하세요>>";
	string end("yes");
	string user;
	for (; user != end;) {
		getline(cin, user);
		if (user == end) {
			cout << "종료합니다...\n";
		}
		else
			cout << "종료하고 싶으면 yes를 입력하세요>>";
	}
}
