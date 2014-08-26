/* c3exe6 Using Basic data types ,
Saran S, Aug 26, 2014 */

#include <stdio.h>

int main(void)
{
	int integerVar = 100;
	float floatingVar = 331.79;
	double doubleVar = 8.44e+11;
	char charVar = 'W';

	_Bool boolVar = 0;

	printf("integerVar = %i\n", integerVar);
	printf("floatingVar = %f\n", floatingVar);
	printf("doubleVar = %e\n", doubleVar);
	printf("doubleVar = %g\n", doubleVar);
	printf("charVar = %c\n", charVar);
	printf("boolVar = %i\n", boolVar);

	return 0;
}