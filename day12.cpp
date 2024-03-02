// C++ program to illustrate the 3d array 
#include <iostream> 
using namespace std; 

int main() 
{ 

	// declaring 3d array 
	int arr[3][3][3]; 
	// initializing the array 
	for (int i = 0; i < 3; i++) { 
		for (int j = 0; j < 3; j++) { 
			for (int k = 0; k < 3; k++) { 
				arr[i][j][k] = i + j + k; 
			} 
		} 
	} 

	// printing the array 
	for (int i = 0; i < 3; i++) { 
		cout << i << "st layer:" << endl; 
		for (int j = 0; j < 3; j++) { 
			for (int k = 0; k < 3; k++) { 
				cout << arr[i][j][k] << " "; 
			} 
			cout << endl; 
		} 
		cout << endl; 
	} 

	return 0; 
}
