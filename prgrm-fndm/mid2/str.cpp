#include <iostream>
using namespace std;

/*
  [0, 1, 2, 3, 4, 5]
*/
void removeChar(char s[], char t) {
  int i = 0, j = 0;
  
  while (s[i] != '\0') {
    if (j != 0 && s[j] != '\0' ) {
      s[j] = s[j + 1];
      j++;
    }
    else if (j != 0 && s[j] == '\0') {
      j = 0;
    }
    if (s[i] == t && j == 0) {
      j = i;
    }
    if(j==0)i++;
  }

  s[i+1] = '\0';
}

void strCp(char d[], const char s[]) {
  int i = 0;
  while (d[i] != '\0') {
    d[i] = s[i];
    i++;
  }
  d[i] = '\0';
}

void strConcat(char d[], const char s[]) {
  int lenD = 0;
  while (d[lenD] != '\0'){d++;}

  int i = 0;
  while (s[i] != '\0') {
    d[lenD + i] = s[i];
    i++;
  }
  d[i] = '\0';
}

int main() {
  char str[1024] = "hi";
  char str2[1024] = "lol";
  char cpStr[1024];
  
  strCp(cpStr, str);
  strConcat(str, str2);
  std::cout << "\nCopied str is: " << cpStr << "\n";
  std::cout << "\nConcated str is: " << str << "\n";
  char testStr[1024] = "This has alots of strings ";

  removeChar(testStr, 's');
  std::cout << "\nRemoving 's' from \"This has alots of strings \" we get: " << testStr << "\n";
  
  return 0;
}
