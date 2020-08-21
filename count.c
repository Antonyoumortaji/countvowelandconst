#include<stdio.h>
#include<string.h>
int main() {

	char str[100];
	char* p;
	int vCount=0, cCount=0;

	printf("enter string:\n");
	fgets(str, 100, stdin);

	p = str;
	while (*p != 0) {
		if (*p == 'A' || *p == 'a' || *p == 'E' || *p == 'e' || *p == 'I' || *p == 'i' || *p == 'o' || *p == 'O' || *p == 'u' || *p == 'U') {
			vCount++;
		}
		else {
			cCount++;
		}
		p++;

	}
	printf("number of vowels %d\n", vCount);
	printf("number of cons%d\n", cCount);

	
	
}
