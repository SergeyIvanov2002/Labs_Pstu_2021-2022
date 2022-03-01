#include <iostream>

using namespace std;

int bashnya(int n, int a, int b, int c)
{
	if (n > 0)
	{
		bashnya(n - 1, a, c, b);
 cout << "с " <<a << " стержня на " << b <<" стержень"<< endl;
		bashnya(n - 1, c, b, a);
	}
	return 0;
}

int main()
{
    setlocale(LC_ALL, "rus");
	int n; 
	cin >> n;
	bashnya(n, 1, 2, 3);
	return 0;
}
