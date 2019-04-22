#include <iostream>
using namespace std;
#define lli long long int
lli a, b;
void swap() {
  lli temp = a;
  a = b;
  b = temp;
}

int main() {
  int T;
  cin >> T;
  while (T--)
  {
    lli count;
    cin >> count >> a >> b;
    if (a > b)
      swap(a, b);
    lli min = (count - 1) * a;
    lli max = (count - 1) * b;
    lli outcome = min;
    if(a==b)
      {
        cout<<min;
      }
    else
      {
        while (outcome <= max)
        {
          cout << outcome << " ";
          outcome += (b-a);
        }
      }
    cout << endl;
  }
  return 0;
}
