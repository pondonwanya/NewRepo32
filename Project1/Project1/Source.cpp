#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char c, word[100];
	int len = 0;
	printf("Enter a  first word : ");
	gets_s(word);
	for (;;) {
		if (word[len] != '\0')len++;
		else break;
	}
	printf("\nThe length of %s  : %d\n", word, len);
	printf("second word         : ");
	for (int x = len - 1; x >= 0; x--) {
		c = word[x];
		printf("%c", c);
	}
	printf("\n");
}