#include <iostream>
using namespace std;


class Flex
{
   friend ostream& operator<< (ostream&  , const Flex& );

public:
   Flex();		        	// default constructor
   
   Flex(const char * );		// constructor with parameters
   
   ~Flex();		    	// destructor (not specifically required)
   
   void cat(const Flex & );	// cat function -- concatenation

private:
   char * myStr;			// variable length string
   int size;
};