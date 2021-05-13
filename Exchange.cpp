#include<iostream>
#include<string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter() { this->ratio = 0; }
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변한 결과 : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter {
protected:
	double ratio;
	virtual double convert(double src) { return src / 1010; }
	virtual string getSourceString() { return "원"; }
	virtual string getDestString() { return "달러"; }
public:
	WonToDollar(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변한 결과 : " << convert(src) << getDestString() << endl;
	}
};

int main() {
	WonToDollar wd(1010);
	wd.run();
}
