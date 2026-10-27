#include <iostream>
using namespace std;

int strCompare(const char a[], const char b[]) {
  int i = 0;
  for (i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
    if (a[i] == b[i]);
    else if (a[i] > b[i]) return 1;
    else return -1;
  }
  if(a[i] == '\0' && b[i] == '\0') return 0;
  else if (a[i] != '\0' && b[i] == '\0') return 1;
  else return -1;
}

int main() {
  
  cout << "\napple apple:  "<< strCompare("apple", "apple");
  cout << "\napple apricot:  "<< strCompare("apple", "apricot");
  cout << "\napple bat:  "<< strCompare("apple", "bat");
  cout << "\ncat cats:  "<< strCompare("cat", "cats");
  cout << "\nb abc:  "<< strCompare("b", "abc");
  cout << "\n'' a:  "<< strCompare("", "a");
  cout << "\nA a:  "<< strCompare("A", "a");
  return 0;
}
