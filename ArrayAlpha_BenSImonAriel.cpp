#include <iostream>
#include <iomanip>

using namespace std;

void InitializeArray(int[]);
void OutputArray(int[]);
void FindMult(char, int, int[]);

int main()
{
  int arr[50];
  char x = ' ';
  int y = 0;

  InitializeArray(arr);
  OutputArray(arr);
  cout << "Please enter a number : ";
  cin >> y;
  cout << "\nPlease enter a letter : ";
  cin >> x;
  cout << "\nPlease place " << x << " by each multiple of " << y << endl;
  FindMult(x, y, arr);


  return 0;
}

void InitializeArray(int arr[])
{
  for (int i = 0; i < 50; ++i)
  {
    if (i < 25)
      arr[i] = i * i;
    else
      arr[i] = i * 3;
  }
}

void OutputArray(int arr[])
{
  for (int i = 0; i < 50; ++i)
  {
    cout << right << setw(1);
      if (i % 10 == 0)
        cout << endl;

      cout << '\t' << arr[i];
  }
  cout << endl;
}

void FindMult(char x, int y, int arr[])
{
  cout << right << setw(1);
  for (int i = 0; i < 50; ++i)
  {
    cout << right << setw(1);
    cout << "\t" << arr[i];
    if (arr[i] % y == 0)
    cout << x;
    if (i == 9 || i == 19 || i == 29 || i == 39 || i == 49)
      cout << endl << endl;;

  }
  cout << endl;
}
