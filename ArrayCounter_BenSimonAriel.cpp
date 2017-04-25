#include <iostream>
#include <string>

using namespace std;

int countChar(const char[]);


int main()
{
  string word;

  cout << "Please enter one word : ";
  cin >> word;


  cout << "There are "<< countChar(word.c_str()) << " characters in " << word << endl;

  return 0;
}

int countChar(const char arr[])
{
  int count = 0;
  const char *ptr = arr;

  while(*ptr != '\0')
  {
    ++count;
    ++ptr;
  }
  return count;
}
