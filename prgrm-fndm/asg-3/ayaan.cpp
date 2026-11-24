#include<iostream>
using namespace std;
int main() {
	int num, original, sum = 0;
	int count = 0;
	bool isSeen = false, arrayFull = false;
	int seen[100] = {};
	cout << "Enter number : " << endl;
	cin >> num;
	original = num;
	if (num < 0)
		num = -num;

		bool breakLoop = false;
		while (num != 1 && !isSeen && !arrayFull) {
			for (int i = 0; i < count && !breakLoop; i++) {
				if (seen[i] == num) {
					isSeen = true;
					breakLoop = true;
				}
			}
				if(!isSeen) {
					if (count < 100) {
						seen[count] = num;
						count++;
					}
					else
						arrayFull = true;

				}
				while (num > 0) {
					int digit;
					digit = num % 10;
					num /= 10;
					sum += digit * digit;
				}
				num = sum;
				sum = 0;

		}

		if (num == 1)
			cout << original << " is a happy number." << endl;
		else
			cout << original << " is an unhappy number." << endl;

		return 0;
	}
