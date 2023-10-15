#include <stdio.h>

/** main - prints sizes of various "data type or format"
 * return - the value of zero
 */

int main(void)

{
	printf("Size of a char: %d bytes(s)", sizeof(char));
	printf("Size of a int: %d bytes(s)", sizeof(int));
	printf("Size of a long int: %d bytes(s)", sizeof(long int));
	printf("Size of a long long int: %d bytes(s)", sizeof(long long int));
	printf("Size of a flost: %d bytes(s)", sizeof(float));
	return (0);
}
