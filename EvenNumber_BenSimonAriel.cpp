#include <iostream>
#include <fstream>

using namespace std;

void takeInput();
int doStuff();

int main()
{
  int arr[3];

  cout << "Please enter a number : ";
  cin >> arr[0];
  while (arr[0] % 2 != 0)
  {
    cout << arr[0] << " is not an even number." << endl;
    cout << "please enter a number : ";
    cin >> arr[0];
  }

  cout << "please enter a second number : ";
  cin >> arr[1];
  while (arr[1] % 2 != 0)
  {
    cout << arr[1] << " is not an even number." << endl;
    cout << "please enter a second number : ";
    cin >> arr[1];
  }

  cout << "please enter a final number : ";
  cin >> arr[2];
  while (arr[2] % 2 != 0)
  {
    cout << arr[2] << " is not an even number." << endl;
    cout << "please enter a final number : ";
    cin >> arr[2];
  }

  ofstream myFile;
  myFile.open("even_BenSimonAriel.txt");

  cout << "Here are the three even numbers : " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
  myFile << "Here are the three even numbers : " << arr[0] << " " << arr[1] << " " << arr[2] << endl;




  return 0;
}
