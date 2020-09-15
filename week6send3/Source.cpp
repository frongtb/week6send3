#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
void stp(void);
int main()
{
	float n, p, sum, start, stop;
	scanf("%f %f", &start, &stop);
	if (start <= stop)
	{
		for (; start <= stop; start++)
		{
			printf("%.0f ", start);
			sum += start;
			p += pow(start, 2);
			n++;

		}
	}
	else
	{
		for (; start >= stop; start--)
		{
			printf("%.0f ", start);
			sum += start;
			p += pow(start, 2);
			n++;
		}
	}
	stp();
	return 0;
}
void stp(void)
{
	printf("stop");
}
