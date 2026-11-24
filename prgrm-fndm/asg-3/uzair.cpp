#include <iostream>
using namespace std;

int main() {
  bool isHappy = false;
  bool finished = false;
  int Arr[14] = {0};
  int count = 0;

  cout << "Enter Number: ";
  int n;
  cin >> n;
  while (n <= 0) {
  	cout << "Invalid n Enter again: ";
  	cin >> n;

  }
  int index = 1;

  int sumn;
  while (finished == false) {

  	cout << n << " --> ";

  	int sum = 0;                       
  	while (n > 0) {
  		int lastdigit = n % 10;
  		sum += (lastdigit * lastdigit);
  		n = n / 10;
  	}
  	if (sum == 1) {
  		isHappy = true;              
  		finished = true;
  	}
  	else {
  		bool found = false;
  		for (int i = 0; i < count && found == false; i++) {
  			if (Arr[i] == sum) {
  				finished = true;
  			}
  		}
		
  		if (finished == false) {
  			Arr[count] = sum;
  			count++;
  			n = sum;
  		}
  	}
  	sumn = sum;
  }

  if (isHappy == true)
    cout << "1" << endl << "Happy number" << endl;
  else
    cout  << sumn<< endl << "Not a happy number" << endl;

  return 0;
}

