#include <iostream>
#include <string>

using namespace std;

string templatetext;

void clone(string text){
	templatetext += text;
	cout << "all text:" << endl << templatetext << endl;
};


int main() {
	int m = 12;
	int &a = m;

	cout << a << &m << endl;

	int n = 5;
	int* prtn = &n;

	cout << &n << endl << n << endl << *prtn << endl << prtn << endl;

	clone("test \n");
	clone("|| repeat ||\n");
	clone(" || khmm || ");
	clone("and well ...");



	return 0;
}