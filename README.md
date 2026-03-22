# EMUNS
================
Enums or Enumerations

Emuns are the data type proportionaly to the user to set a set of named integer constant this is to make the code more easy to
read and make it more simple structured instead of using raw numbers
ex.

	enum Number{
	NUM1;// the value of this is 0
	NUM2;// the value of this is 1
	NUM3;// the value of this is 2
	};
	int  main() {
 
	enum Number today = NUM3;
    printf("%d\n", today);
    return 0;
 	 }
the out put will be 2 bc the the number is assigned by default

but we can also define the values bt own numbers so by this we can avoid to get a imaginary number
ex
	
	enum Number{

	NUM1=21;// the value of this is 21

	NUM2=11;// the value of this is 11

	NUM3=44;// the value of this is 44
	};

	   int  main() {

	enum Number today = NUM1;
    printf("%d\n", today);
    return 0;

   	}
the out put will be the number that we assigned so it be 21

Emun is considerate a integer type by the compiler

this help to the programmer to read the code more easy and 0 confusion and help to have a better debugging

is better to use when we want to set a state in the code like STATE, ALIVE OR DEAD ; MODE, READ OR WRITING;OPTIONS,START OR END; ERROR CODES, FAIL OR OK....etc;

ex

	
	typedef enum {
		
		OFF, // 0 value
	    ON //1 value
		}Switch;
	
	Switch s = ON;
===============
