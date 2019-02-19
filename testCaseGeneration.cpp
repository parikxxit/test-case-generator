#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n;
	cout << "Enter no of test case (enter 1 if there is no test case)"; 
	cin >> t;
	int case_;
	cout << "Enter 1 for generating random number." << endl;
	cout << "Enter 2 for generating random array,matrix,pair." << endl;
	cout << "Enter 3 for generating random strings or array of strings " << endl;
	cin >> case_;
	switch(case_) {
		case 1 :
			int min,max;
			cout << "Enter Min value of integer ";
			cin >> min;
			cout << endl << "Enter Max value of integer ";
			cin >> max;
			cout << endl;
			break;
		case 2 :
			int arr_ch;
			cout << "1 for random array \n2 for random array of pairs.\n3 for random matrix ";
			cin >> arr_ch;
			cout << endl;
			break;
		case 3 :
			int string_ch;
			cout << "1 for random string \n2 for ramdom character matrix ";
			cin >> string_ch;
			cout << endl;
			break;
		default :
			cout << "Wrong ip try again" << endl;
			break;
	} 
	return 0;
}
