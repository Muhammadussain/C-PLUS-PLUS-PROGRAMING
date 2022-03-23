#include <iostream>
using namespace std;
void add ()
{
  int a = 0;
  int b;
  int sum = 0;
  cout << "*****************" << endl;
  cout << "Enter the numbers you want to add :: " << endl;
  cin >> b;
  for (int i = 0; i < b; i++)
    {
      cout << "Enter number " << i + 1 << " :: ";
      cin >> a;
      cout << endl;
      sum = sum + a;
    }
  cout << "*****************" << endl;
  cout << "sum = " << sum << endl;}
int main ()
{
    add ();
    
  return 0;}
