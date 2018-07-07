/*
Reference: Textbook: Absolute C++, 6th ed., Walter Savitch., Addison-Wesley ISBN: 0133970787
*/
#include <iostream>
#include <cstring>
#include "flex.h" 
using namespace std;


Flex::Flex() // default constructor
{
    size = 1;
    myStr = new char [size+1];  //str is mi tipo , and mi cadena es de characteres
    getline(myStr," "); //char * strcpy (char* destination, const char* source)
} 

Flex::Flex(const char * fill) // constructor with 1 parameter
{
 //   size = strlen(fill);
  //  myStr = new char [size+1];
 //   strcpy(myStr, fill);
}
 
Flex::~Flex() // destructor 
{
    delete[] myStr; 
}    
        
void Flex::cat(const Flex& nObj) //function concatenation
{
    char newSize = size + nObj.size;  //char newsize = size + strlen(f.str);
    
    char * temp = new char[newSize+1]; 	// allocate with room for '\0'
    strcpy( temp, myStr ); // copy this string to temp
    
    strcat( temp, nObj.myStr ); 
    
//  for (char i = 0; i <= nObj.size; i++)
//	temp[size+i] = nObj.myStr[i];   // concatenate myStr to temp, including '\0'
    
    delete [] myStr;			// delete old array
     
    myStr = temp;				// set str to new one
    size = newSize;			// update size tracker
   
}

ostream& operator<< (ostream& os, const Flex& obj)
{
    os << '*'<< obj.myStr << '*';
    
    return os; 
}

  
