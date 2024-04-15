#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n];
	int minRand = 20, maxRand = 30;
	for (int i = 0; i < n; )
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		bool Unique = true;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == arr[i])
			{
				Unique = false;
				break;
			}
		}
		if (Unique)
		{
			i++;
		}
	}
	cout << "Уникальные числа: " << tab;
	for (int i = 0; i < n;i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}