/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

/* C Programming Code
#include <stdio.h>
int main()
{
    int no;
    long fac;

    printf("Enter a Number : ");
    scanf("%d", &no);

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

    printf("Factorial of %d is %ld\n", no, fac);  
    return 0;
}*/

#include <iostream>
// function main begins program execution 
int main ()
{
  /* variable definition */
  int no;
  long fac;

  std::cout << "Enter a Number : "; // User Input a Number
  std::cin >> no;

  fac = 1;  //Assign A Value 

  /* for loop execution */
  for (int r=no; r >= 1; r--) 
  {

    fac = fac * r;

  } // End for loop execution

  std::cout << " Factorial of " << no << " is " << fac << std::endl; //Display Factorial

  return 0;

}//end of function main