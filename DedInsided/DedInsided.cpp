#include <Windows.h>
#include <iostream>

int main()
{
	int i = 1000;
	while (i>0)
	{
		i = i - 7;
		printf("%d -7\n",i);
		Sleep(5);
	}
	printf("Dead inside");
}


