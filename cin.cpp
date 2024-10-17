#include<iostream>
using namespace std;
int main() {
	int s = 6;
	char* cptr=new char[6];
	//cin >> cptr; it takes space as delimeter
	cin.getline(cptr, 7);// also print string after space 
	cout << cptr << endl;
	cout << cin.fail() << endl;// 0 read 1 not read
	cin.clear();//reset failbit
	cin.ignore();//clear buffer
	cout << cin.fail() << endl;
	/*cin >> cptr;
	cout << cptr << endl;*/
	
	



}