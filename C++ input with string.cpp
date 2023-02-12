// cin with strings
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string mystr;
  cout << "What's your name?     === \n";
  getline (cin, mystr);
  cout << "Hello " << mystr << ".\n";
  cout << "What is your favorite team?     == \n";
  getline (cin, mystr);
  cout << "I like " << mystr << " too!\n";
  return 0;
}
