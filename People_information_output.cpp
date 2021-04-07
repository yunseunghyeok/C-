#include<iostream>
#include<string>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person(int num = 1, string str = "Grace", double weight = 20.5) { id = num, name = str, this->weight = weight; }
	void show() { cout << id << ' ' << weight << ' ' <<name << endl; }

};

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}
