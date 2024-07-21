//Character types and values//
#include <stdio.h>

int main()
{
	char firstLetter = 'A';
	char firstSmallLetter = 'a';
	char lastLetter = 'Z';
	char lastSmallLetter = 'z';
	printf("Upper case letters beetween (and with) 'Z' and 'A' is : %d\n", 
		lastLetter - firstLetter+1 );
	printf("Lower case letters beetween (and with) 'z' and 'a' is : %d\n", 
		firstSmallLetter-lastSmallLetter-1);
	return 0;
}