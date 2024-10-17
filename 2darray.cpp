#include<iostream>
using namespace std;
//intilize
int main() {
	int matrix[4][3];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			matrix[i][j] = 8;
		}
	}
	//display
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] <<"";
			
		}
		cout << endl;
	}
}
