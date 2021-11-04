#include <iostream>
using namespace std;

void create(int*  &a,int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		a[i] = -20 + rand() % (41);
		cout << a[i] << " ";
	}
}

void find(int* &a, int n,int &b,int &number)
{
		for (int i = 0; i < n; i++)
		{
			 if ((a[i]%2==1) || (-a[i] % 2 == 1))
		     {
				b = a[i];
				number = i;
				break;
			}
     	}
}

void result1(int* &a, int &b, int n,int &number)
{
	for (int i = 0; i < n; i++)
	{
		if (((b < a[i]) && (a[i] % 2 == 1) && (a[i] > 0)) || ((b < a[i]) && (-a[i] & 2 == 1)))
		{
			b = a[i];
			number = i;
		}

	}
}

void result(int* &a, int n, int b, int zamina, int number)
{
	zamina = a[n-1];
	a[n-1] = b;
	a[number] = zamina;
	for (int i = 0; i <= n-1; i++)
		cout << a[i] << " ";
}

int main()
{
	srand((unsigned)time(NULL));
	int n, a = -11, zamina=0, number = 0;

	cout << "n="; cin >> n;
	int* q = new int[n];

	create(q, n);
	find(q, n, a,number);
	result1(q, a, n,number);
	cout << endl;
	result(q, n,a , zamina, number);

	return 0;
}