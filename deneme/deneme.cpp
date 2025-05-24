#include <iostream>	
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

void menu();
double XRastgeleSayiGetir(int);
void XKereRDondur(int, int);
void Yazdir(vector <int>);
double Ortalama(vector <int>);
double GercekOrtalama = 0.0;


int main()
{
	srand(time(NULL));
	//menu();

	
	for (int i = 0; i < 100; i++)
	{
		cout << (rand() % 100) + 1 << endl;
	}

	return 0;
}


void menu()
{
	for (int i = 0; i < 1000000; i++)
	{
	//cout << "Kac tane rastgele sayi istersin? 1000000\n"; 
	//int x, y;
	//cin >> x;
	//cout << "Sayilar kaca kadar olsun? 1000000\n";
	//cin >> y;
	//cout << i+1 << ". ortalama = ";
	XKereRDondur(100, 101);
	//cout << endl << endl;
	}

	cout << "\n\nTotal Ortalama= " << GercekOrtalama / 100000 << endl;

}

double XRastgeleSayiGetir(int x)
{
	double r = (rand() % x);
	return r;
}

void XKereRDondur(int x, int y)
{
	vector <int> sayilar;
	double a = 0;
	for (int i = 0; i < x; i++)
	{
		a = XRastgeleSayiGetir(y);
		//cout << "Rastgele Sayi " << a << endl;
		sayilar.push_back(a);
	}
	//cout << Ortalama(sayilar) << endl;
	GercekOrtalama += Ortalama(sayilar);
}

double Ortalama(vector <int> sayilar)
{
	double Ort = 0;

	for (double i : sayilar)
	{
		Ort += i;
	}
	return Ort / sayilar.size();
}

void Yazdir(vector <int> sayilar)
{
	for(double i: sayilar)
	{
		cout << i << endl;
	}

}
