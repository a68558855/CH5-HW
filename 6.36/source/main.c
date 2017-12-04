#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50
void stringReverse(int);
char str[SIZE];
int main(void) 
{
	int len;
	printf("¿é¤J¦r¦ê: ");
	scanf("%s", &str);
	len = strlen(str);
	stringReverse(len);
	printf("\n");
	system("pause");
	return 0;
}
void stringReverse(int len) 
{
	if (len == 1)
	{
		printf("%c", str[0]);
	}
	else
	{
		printf("%c", str[len - 1]);
		stringReverse(len - 1);
	}

}