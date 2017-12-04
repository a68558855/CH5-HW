#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int counter[11] = { 0 };
	int i;
	for (i = 1; i <= 36000; i++)
	{
		int dice1 = rand() % 6 + 1;
		int dice2 = rand() % 6 + 1;
		int sum = dice1 + dice2;
		counter[sum - 2]++;
	}
	for (i = 2; i <= 12; i++)
	{
		printf("%d: %d\n", i, counter[i - 2]);
	}
	system("pause");
	return 0;
}



