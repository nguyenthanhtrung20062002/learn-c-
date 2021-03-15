// lesson3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

#include <conio.h>
using namespace std;

void nhapmang(int a[], int n);
void xuatmang(int a[], int n);
int giatrilonnhat(int a[], int n);
int kiemtra(int n);

int main()
{
	int a[100];
	int n;
	cout << "nhap n";
	cin	>> n;
	cout << kiemtra(n);
}

int kiemtra(int n) {
	int* mang;
	mang = new int[10];
	int k = 0;
	int b = sqrt(n);
	for (int i = 2; i <= b; i++)
	{
		if (n % i == 0) {
			mang[k] = i;
			k++;
		}
	}


	int sum = 0;
	for (int j = 0; j <= (k-1); j++) {
		sum += mang[j];
	}
	return sum;
}

int kiemtra 


void nhapmang(int a[],int n)
{
	for(int i=0; i<=n; i++)
	{
		cout << "nhap vao mang phan tu thu a[" << i << "]: ";
		cin >> a[i];
	}
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i <= n; i++)
	{
		cout << a[i] << " ";
	}
}
int giatrilonnhat(int a[], int n) {
	int max;
	for (int i = 0; i <=n; i++) 
	{
	
		if (a[i] > a[i + 1])
		{
			max = a[i];
		}
		else
		{
			max = a[i + 1];
		}
	}
	return max;
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
