#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int a, b, c;
	cout <<"multiplication calculate"<<endl<<endl << "write first number:" << endl;
	cin >> a;
	cout<< endl<<"write second number:"<<endl;
	cin >> b;
	c = a * b;
	cout<<endl<<"result:"<<endl<< a << "*" << b << "=" << c;
	return 0;
}