#include <iostream>

using namespace std;

bool fib(int num)
{
  int a = 0;
  int b = 1;

  while (b < num)
  {
    int temp = b;
    b = a + b;
    a = temp;
  }

  return b == num;
}

int main()
{
  int num;

  cout << "Digite um número: ";
  cin >> num;

  if (fib(num))
    cout << num << " está na sequência de Fibonacci." << endl;
  else
    cout << num << " não está na sequência de Fibonacci." << endl;

  return 0;
}