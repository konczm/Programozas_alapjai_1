#include <stdio.h>

//Koki megoldása
int main(int argc, char** argv)
{
	int a, b, irany, feltetel=1; //irany=0 lefele .... irany=1 felfele

	if (scanf("%d", &a) == 0)
	{
		return -1;
	}

	printf("%d ", a);

	if (scanf("%d", &b) == 0)
	{
		return 0;
	}
	a < b ? irany = 1 : irany = 0;

	while (feltetel)
	{
		if ( ((a < b) && (irany == 1)) || ((a > b) && (irany == 0)) )
		{
			printf("%d ", b);
			a = b;
			if (scanf("%d", &b) == 0)
			{
				feltetel = 0;
			}
		}
		else
		{
			feltetel = 0;
		}
	}
	return 0;
}