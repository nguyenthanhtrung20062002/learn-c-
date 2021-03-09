// LESSON1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{

	int slength;
	char x[81]; //cho phep nguoi dung nhap mot chuoi co do dai toi da la 80 ky tu.
	cout << "Nhap chuoi : " << endl;
	cin >> x;
	slength = strlen(x);
	cout << "Do dai cua chuoi " << x << " la " << slength << "." << endl;
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
