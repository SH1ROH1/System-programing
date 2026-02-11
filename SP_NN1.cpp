#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

using namespace std;

int main(void) {
	
	// library books
	char text[50];
	char text2[50];
	while(true) {
		scanf_s("%49s", text, (unsigned)sizeof(text));
		if (strcmp(text, "close") == 0){
			printf("bye~bye");
			break;	
		} else 
		if (strcmp(text, "print") == 0){
			scanf_s("%49s", text2, (unsigned)sizeof(text2));
			printf("saved text: %s\n", text2);
		} else
		if (strcmp(text, "delete") == 0){
			printf("deleted text: %s\n", text2);
			text2[0] = '\0';
		} else
		if (strcmp(text, "view") == 0){
			cout << text2 << endl;
		}	else {
    	int a, b;
    	char op;
    	// пробуем считать выражение
    	if (sscanf(text, "%d%c%d", &a, &op, &b) == 3) {
        int result;
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
						result = a / b;
						break;
					default:
						printf("command error\n");
						continue;
					}
					printf("%d\n", result);
				}
				else {
					printf("command error\n");
      }
    }
  }
  return 0;
}