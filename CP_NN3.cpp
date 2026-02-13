#include <iostream>
#include <fstream>
#include <string>

using namespace std;




string check(string namefile, string library, string starterlibrary){
	ifstream file(namefile,ios::ate);
	if (!file.is_open() || file.tellg() == 0) {
    file.close();
    library = starterlibrary;
    ofstream out(namefile);
    out << library;
    out.close();
  }else {
    file.seekg(0);
    library.assign(
    istreambuf_iterator<char>(file),istreambuf_iterator<char>());
		file.close();
  }
  return library;
};

string removeWord(string text, string word){
  size_t pos;
	while ((pos = text.find(word)) != string::npos){
    text.erase(pos, word.length());
  }
  return text;
};

void upload(const string& namefile, const string& library){
  if (library.empty()) return;
	ofstream out(namefile);
	if (!out.is_open()) {
    cerr << "Error: not opened file" << namefile << endl;
    return;
  }
  out << library;
  out.close();
};

string addWord(string text, string word){
  if (!text.empty()) {
    text += " ";
	}
  text += word;
  return text;
};
int main() {
	string starterlibrary = "C++ stands as one of the most powerful and versatile programming languages in the tech world. Its ability to provide control over system resources while still offering high-level programming features makes it a popular choice for complex software development.\n";

	string library;
	//   librarylist =  {"library.txt,library2.txt,library3.txt"};

	library = check("library.txt", library, starterlibrary);

	cout << library << endl;

	library = removeWord(library, "stands");

	cout << library << endl;

	upload("library.txt",library);

	library = check("library.txt", library, starterlibrary);
	cout << library << endl;
	library = addWord(library," newnew!\n");
	cout << library << endl;
	upload("library.txt",library);


  return 0;
}