#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n > 0 && n <= 1000) {
		if  (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19 || n == 21 || n == 22 || n == 23 || n == 29 || n == 31) {
			cout << n << " number is prime";
		}
	}
	if (n % 2 == 0) {
		cout << "2 ";
	}
	 if (n % 3 == 0) {
		cout << "3 ";
	}
	 if (n % 5 == 0) {
		cout << "5 ";
	}
	 if (n % 7 == 0) {
		cout << "7 ";
	}

	else if (n % 9==0) {
		cout << "9 ";
	}
	else if (n % 11 == 0){
		cout << "11 ";
	}
	 if (n % 13 == 0) {
		cout << "13 ";
	}
	 if (n % 17 == 0) {
		cout << "17 ";
	}
	 if (n % 19 == 0) {
		cout << "19 ";
	}
	else if (n % 21 == 0) {
		cout << "21 ";
	}
	else if (n % 23==0) {
		cout << "23 ";
	}
	else if (n % 29 == 0) {
		cout << "29 ";
	}
	else if (n % 31 == 0) {
		cout << "31 ";
	}
	return 0;

}

