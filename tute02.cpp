/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

/* C Programming Code
#include <stdio.h>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   printf("Enter Employee Type : ");
   scanf("%d", &etype);
   printf("Enter Salary  : ");
   scanf("%f", &salary);
   printf("Enter OtHrs : ");
   scanf("%d", &otHrs); 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
   printf("Net Salary is %f ", netSalary);
  
   return 0;
}*/

#include <iostream>
// function main begins program execution 
int main ()
{
  /* variable definition */
  double salary, netSalary;
  int etype, otHrs, otRate;

  std::cout << "Enter Employee Type : "; // User Input Employee Type
  std::cin >> etype;

  std::cout << "Enter Salary  : "; // User Input Salary
  std::cin >> salary;

  std::cout << "Enter OtHrs : "; // User Input Employee Type
  std::cin >> otHrs;

  /* switch case selection execution */
  switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   } // switch case selection execution

  netSalary = salary + otHrs* otRate; //Calculate the Net Salary

  std::cout << std::endl; // For New Line 

  std::cout << "Net Salary is " << netSalary << std::endl; // Display Net Salary

  return 0;

}//end of function main
