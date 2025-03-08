#include <iostream>
#include <string>

using namespace std;

unsigned long  long factorial(unsigned long long n);
int main()
{
  string s;
  unsigned long long n = 0;
  bool p = true;
  
  while (p)
  {
    cout << "Enter number = ";
    getline(std::cin, s);
    p = false;
    for (size_t i = 0; i < s.length(); i++)
    {
      if (!isdigit(s[i]))
      {
        p = true;
      }
    }
    if (p == false)
    {
      if (s == "")
      {
        p = true;
      }
      else
      {
        n = stod(s);
        if (n > 20)
        {
          p = true;
        }
      }
    }
  }
  
  cout << factorial(n) << endl;
  return 0;
}

unsigned long long factorial(unsigned long long n)
{
  if (n == 0)
    return 1;
  return n * factorial(n - 1);
}
