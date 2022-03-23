#include <iostream>
using namespace std;
void multiply ()
{
  int a = 1;
  int b;
  int product = 1;
  cout << "*****************" << endl;
  cout << "Enter the numbers you want to multiply :: " << endl;
  cin >> b;
  for (int i = 0; i < b; i++)
    {
      cout << "Enter number " << i + 1 << " :: ";
      cin >> a;
      cout << endl;
      product = product * a;
    }
  cout << "*****************" << endl;
  cout << "product = " << product << endl;
}

int main ()
{
  multiply ();
  return 0;
}
