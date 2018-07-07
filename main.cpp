
/* Reference: Book Absolute C++ Author Walter Savitch  */ 

#include <iostream>
#include "flex.h"
using namespace std;

int main()
{
	Flex a, b("Merry"), c("Christmas");
	cout << a << ',' << b << ',' << c << endl;
	b.cat(a);
	cout << b << endl;
	b.cat(c);
	cout << b << endl;
	c.cat(c);
	c.cat(c);
	cout << c << endl;
	return 0;
}
/*	Here is my execution output:

	* *,*Merry*,*Christmas*
	*Merry *
	*Merry Christmas*
	*ChristmasChristmasChristmasChristmas*
*/

