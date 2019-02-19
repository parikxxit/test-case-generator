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
			int max,nmax;
			cout << endl << "Enter Max value of integer allowed ";
			cin >> max;
//			@WTF
//			cout << endl << "Enter number of input you need ";
//			cin >> n;
			cout << endl << "Enter the max values of n allowed";
			cin >> nmax;
			bool showTest;
			cout << "Do you want to display no of test casese. 1 for yes 0 for no ";
			cin >>showTest;
			if(showTest) {
				cout << t << endl;
			}
			srand(time(NULL));//for random values every time.Want me to write about it ping me:) on twitter @pariksingh
			while(t--) {
				n = rand() % nmax;
				cout << n << endl;
				for(int i = 0; i < n; i++) {
					cout << rand() % max << endl;
				}	
			}
			
			
			break;
		case 2 :
			int arr_ch;
			cout << "1 for random array \n2 for random array of pairs.\n3 for random matrix ";
			cin >> arr_ch;
			cout << endl;
			switch(arr_ch) {
				case 1 :
					int max_arr;
					cout << "Enter Max no of array elements: ";
					cin >> max_arr;
					cout << "Enter max size of inter allowed in array ";
					int int_max;
					cin >> int_max;
					bool showTest;
					cout << "Do you want to display no of test casese. 1 for yes 0 for no ";
					cin >>showTest;
					if(showTest) {
						cout << t << endl;
					}
					for(int i = 0; i < t; i++) {
						int arr_size = 1 + rand() % max_arr;
						cout << arr_size << endl;
						for(int i = 0; i < arr_size; i++) {
							cout << rand() % int_max << " ";
						}
						cout << endl;
					}
					break;
				case 2 :
					break;
				case 3 :
					break;
				default :
					cout << "Invalid option" << endl;
					break;
			}
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
