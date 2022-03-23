#include <iostream>
using namespace std;
void factorial ()
{
  int i, fact = 1, number;
  cout << "Enter any Number: ";
  cin >> number;
  for (i = 1; i <= number; i++)
    fact = fact * i;

  cout << "The  Factorial of " << number << " is: " << fact << endl;
}
int main ()
{
  factorial ();
  return 0;
}

