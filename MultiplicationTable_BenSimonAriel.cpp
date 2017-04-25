#include <iostream>
#include <fstream>

using namespace std;

int GetArrayTableSize(int &x);
void PopulateArray(int[10][10], int x);
void PrintArray(int[10][10], int x);
void SaveArralToFile(int[10][10], int);

int main()
{
  int x = 10;
  int arr[10][10];
  GetArrayTableSize(x);
  PopulateArray(arr, x);
  PrintArray(arr, x);
  SaveArralToFile(arr, x);
  return 0;
}

int GetArrayTableSize(int &x)
{
  cout << "which multiplication table do you want to see? : ";
  cin >> x;
  cout << endl;
  if (x <= 0 || x > 10)
  {
    cout << "which multiplication table do you want to see? : ";
    cin >> x;
    cout << endl;
  }  return 0;
}

void PopulateArray(int arr[10][10], int x)
{
  for (int row = 0; row < x; ++row)
  {
    for (int col = 0; col < x; ++col)
    {
      arr[row][col] = (row + 1) * (col + 1);
    }
    cout << endl;
  }
}

void PrintArray(int arr[10][10], int x)
{
  cout << " : ";
  for (int i = 0; i < x; ++i)
  {
    cout << i+1 << "\t";
  }
  cout << endl << "-------------------------------------------" << endl;
  for (int row = 0; row < x; ++row)
  {
    cout << row+1 << ": ";
    for (int col = 0; col < x; ++col)
    {
      cout << arr[row][col] << "\t";
    }
    cout << endl;
  }
}

void SaveArralToFile(int arr[10][10], int x)
{
  ofstream myFile("mtable_BenSimonAriel.txt");
  myFile << " : ";
  for (int i = 0; i < x; ++i)
  {
    myFile << i+1 << "\t";
  }
  myFile << endl << "-------------------------------------------" << endl;
  for (int row = 0; row < x; ++row)
  {
    myFile << row+1 << ": ";
    for (int col = 0; col < x; ++col)
    {
      myFile << arr[row][col] << "\t";
    }
    myFile << endl;
  }
}
