/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

long Factorial(int no)
{
  int a;
  long A = 1;
  for(a = no;a >=1;a--)
  {
    A = A * a;
  }
  return A;

}
long nCr(int n, int r)
{
  int a, F;
  long NCR;
  int B = 1;
  F = Factorial(n);
  for(a = r;a >= 1;a--)
  {
    B = B * a;
  }
  int C = 1;
  for(a = n - r;a >= 1;a--)
  {
    C = C * a;
  }
  NCR = F / B * C;
  return NCR;
}