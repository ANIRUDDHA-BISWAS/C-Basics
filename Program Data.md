#### The topic of C
- Constants
- Variables
- Data types



### Variables
- Named memory location
- Variable name can begin with a ' letter or underscore, and comprise of letters, digits or underscore.
- Names are case-sensitive
- Certain reserved kevwords cannot be used as variable names (continue, if, short, union, return..)
- A variable must be declared before its use
  - Example: int age, quantity, price; /* declares three variables that can store integer values */
- To initialize a variable, use = 
  - Example: age = 21 ;
- Declaration and initialization can be combined in one statement
  - Example: int amount1 = 45, amount2 = 500, amount3 = 999;
- An uninitialized variable is simply junk (in general)


### Data types
- C is a typed language
- Every data item has a type associated with it.
- Examples of declaring variables:
  - int numl;
  - float cgpa;
  - char initial;
 
#### Fundamental Data Types in C
- Integer (short, int, long, long long)
- Floating point (float, double, long double)
- Character (char)


#### Constants
- Fixed values used in a program, and their value never changes in the program
- C specifies a default type for a constant.
  - E.g. 25, 35.65 have specific types associated with each
 
- Default for an integer is int. If a constant doesn't fit in int, the next higher type is tried.
- Suffixes can be used for e.g: U or u for unsigned, L or I for long..
- Default for floating point number is double.
- Suffix F or f demotes it to float; L or I promotes it to long double.


#### Declaring Constants
- Two ways:
  - Using const qualifier
  - const float pi = 3.14f; //pi is read-only
    
- Symbolic constants using
   - #define #define PI 3.14f //no semi-colon used

#### Defining Constants

Using #define  
Syntax: #define variable name value  
Note: no use of semicolon at the end  

Example:
```
#include<stdio.h>
#define X 10 //always written before int main ()
int main () {
      int A = X;
      X = X+10; //error: Ivalue required as left operand of
        //assignment
return 0;
}
```

  
