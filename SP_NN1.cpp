#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <string>

using namespace std;

int main(void) {
	
	// library books
	char text[50];
  string savedText;
	while(true) {
		scanf_s("%49s", text, (unsigned)sizeof(text));
		if (strcmp(text, "close") == 0){
			printf("bye~bye");
			break;	
		} else 
		if (strcmp(text, "print") == 0){
		  string text2;
			cout << "print text: ";
      cin.ignore(); // очищаем оставшийся Enter после предыдущего ввода
			getline(cin, text2);
      savedText += text2 + "\n";  
      cout << "saved text: " << endl << savedText << endl;
		} else
		if (strcmp(text, "delete") == 0){
			cout << "deleted text: " << savedText << endl;
    	savedText.clear();
		} else
		if (strcmp(text, "view") == 0){
			cout << savedText << endl;
		}	else {
    	int a, b;
    	char op;
    	// пробуем считать выражение
    	if (sscanf(text, "%d%c%d", &a, &op, &b) == 3) {
        float result;
				switch(op) {
					case '+':
						result = a + b;
						break;
					case '-':
						result = a - b;
						break;
					case '*':
						result = a * b;
						break;
					case '/':
						if (b == 0) {
							printf("Division by zero!\n");
							continue;
						}
						result = float(a) / float(b);
						break;
					default:
						printf("command error\n");
						continue;
					}
					printf("%.3f\n", result);
				}
				else {
					printf("command error\n");
      }
    }
  }
  return 0;
}