#include <iostream>
using namespace std;

void pyramid();
void patternPrinting();

int main() {
  patternPrinting();
  return 0;
}

void pyramid() {
  
  unsigned int r = 0;
  cout << "Enter the number of rows: ";
  cin >> r;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < r * 2; j++) {
      if (j <= r + i && j >= r - i)
        cout << " * ";
      else
        cout << "   ";
    }
    cout << "\n";
  }

}
void patternPrinting() {
  
  int r = 0;
  cout << "Enter the number of rows: ";
  cin >> r;

  if (r > 9 || r < 0) {
    cout << "Invalid Input :(";
    return;
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < r * 2 - 1 ; j++) {
      if (j < r + i - 1 && j > r - i - 1)
        cout << " .";
      else
        if (j >= r) cout  << " " <<  r - ((j + 1) - r) << "";
        else cout << " " << (j + 1) << "";
      // cout << "@" << j;
    }
    cout << "\n";
  }

}
