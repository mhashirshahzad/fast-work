#include <iostream>
using namespace std;

int main() {
  int n = 25;

  cout << "Enter n: ";
  cin >> n;

  cout << "Sadly I took the diamond outside :3" << endl;
  // upper half
  for (int i = 0; i < n / 2; i++) {
    // hollow
    for (int j = 0; j < n; j++) {
      if (j - n / 2 >= i)
        cout << "*";
      else if ((n / 2) - j >= i + 1)
        cout << "*";
      else
        cout << " ";
    }
    cout << "\t\t";
    // filled
    for (int j = 0; j < n; j++) {
      if (j - n / 2 >= i)
        cout << " ";
      else if ((n / 2) - j >= i + 1)
        cout << " ";
      else
        cout << "*";
    }
    cout << "\n";
  }
  // lower half
  for (int i = n / 2; i >= 0; i--) {
    // hollow
    for (int j = 0; j < n; j++) {
      if (j - n / 2 >= i)
        cout << "*";
      else if ((n / 2) - j >= i + 1)
        cout << "*";
      else
        cout << " ";
    }
    cout << "\t\t";
    // filled
    for (int j = 0; j < n; j++) {
      if (j - n / 2 >= i)
        cout << " ";
      else if ((n / 2) - j >= i + 1)
        cout << " ";
      else
        cout << "*";
    }
    cout << "\n";
  }
  return  0;  
}
