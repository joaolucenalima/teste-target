#include <iostream>

using namespace std;

string reverse(string &s)
{
  int n = s.size();

  string reversed = "";

  for (int i = n; i >= 0; i--)
    reversed += s[i];

  return reversed;
}

int main()
{
  string s;

  cout << "Digite uma palavra ou frase: ";
  getline(cin >> ws, s);

  cout << reverse(s) << endl;
}