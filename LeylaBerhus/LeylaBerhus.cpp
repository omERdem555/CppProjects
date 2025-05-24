#include <iostream>

using namespace std;

int main()
{
	int toplam = 0;
	int sayilar[5]{ 10, 20, 30 };
	for (int i = 0; i < 5; i++)
	{
		toplam += sayilar[i];
	}
	return 0;
}
