#include <iostream>
using namespace std;
void substract ()
{
  int a = -1;
  int b;
  int difference = 0;
  cout << "*****************" << endl;
  cout << "Enter the numbers you want to substract :: " << endl;
  cin >> b;
  for (int i = 0; i < b; i++)
    {
      cout << "Enter number " << i + 1 << " :: ";
      cin >> a;
      cout << endl;
      difference = (a) - (difference);
    }
  cout << "*****************" << endl;
  cout << "difference = " << -difference << endl;
}

int main ()
 {substract ();
  return 0;
}
