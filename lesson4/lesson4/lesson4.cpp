// lesson4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
void xuatmang(int a[], int k);
bool checksonguyento(int n);
int* taomangsonguyento(int b);
int demsophantutrongmang(int a[]);
int* mangchung(int a[], int b[]);
int main()
	{
	int a;
	int b;
	cout << "Nhap vao so a: " << endl;
	cin >> a;
	cout << "Nhap vao so b: " << endl;
	cin >> b;
	int*mang;
	int* mangb;
	int* mangchung1;

	mang = taomangsonguyento(a);
	mangb = taomangsonguyento(b);
	mangchung1 = mangchung(mang, mangb);



	}




void xuatmang(int a[], int k)
{
	for (int i = 0; i <= k; i++)
	{
		cout << a[i] << " ";
	}
}

bool checksonguyento(int n)
{
	if (n < 2) 
	{
		return false;
	}
	for (int i = 2; i <= (n / 2); i++)
	{
		if (n % i == 0) {
			cout << n << "Khong phai la so nguyen to" << endl;
			return false;
		}
	}
	return true;
}

int* taomangsonguyento(int b){
	int mang[100];
	int l = 0;
	for (int i = 1; i <= b; i++)
	{
		if (b % i == 0)
		{
			if (checksonguyento(b / i) == true) {
				mang[l] = b / i;
				l++;
			}

		}
	}
	xuatmang(mang, l - 1);
	return mang;

}

int* mangchung(int a[], int b[] ) {
	int mang[100];
	int k = 0;
	//
	for (int i = 0; i <= demsophantutrongmang(a)-1; i++) {
		for (int j = 0; j <= demsophantutrongmang(b) - 1; j++) {
			if (a[i] == b[j]) {
				mang[k] = a[i];
					k++;
			}

		}
	}


	//
	cout << "mangchung" << endl;
	xuatmang(mang, k);
	return mang;
}

int demsophantutrongmang(int a[]) {
	cout << "cout" <<  (sizeof(a) / sizeof(int));
	
	return sizeof(a) / sizeof(int);
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
