// LESSON2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
using namespace std;
int tinhchuvi(float a,float b);
int tinhdientich(float a, float b);
int main()
{
	float a;
	float b;
	cout << "nhap vao chieu dai: " << endl;
	cin >> a;
	cout << "nhap vao chieu rong: " << endl;
	cin >> b;

	// in ra chu vi nhan dien tich
	int chuvi = tinhchuvi(a, b);
	cout << chuvi<<endl;
	int dientich = tinhdientich(a, b);
	int ketqua = chuvi * dientich;
	cout << ketqua;
	

}


//function kiem tra so nguyen to 
int tinhchuvi(float a, float b)
{
	float chuvi = (a + b) * 2;
	return chuvi;
}

int tinhdientich(float a,float b) 
{
	float dientich = a * b;
	return dientich;
}


// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
