#include <iostream>
#include <cmath>

using namespace std;
int nod(int a, int b) 
{
    while (a != 0 && b != 0)
    {
        if (a > b) { a = a % b; }
        else { b = b % a; }
    }
    return a + b;
}



double d(double a, double b) 
{
    return a / b; 
}
void d(int a1, int a, int b1, int b) 
{
    int rez1;  
    int rez2; 
    int acount; 
    int bcount; 
    int gcount; 
    rez2 = a * b; 
    acount = nod(a, rez2); 
    
    bcount = nod(b, rez2); 
    rez1 = (a1 * acount) - (b1 * bcount); 
    gcount = nod(rez1, rez2); 
    rez1 = rez1 / gcount; 
    rez2 = rez2 / gcount;
    if (rez1 == 0 || rez2 == 0) 
    {
        cout << "Обыкновенные дроби:  (" << a1 << " / " << a << ") / (" << b1 << " / " << b << ") = " << 0 << endl;
    }
    else
    {
        cout << "Обыкновенные дроби:  (" << a1 << " / " << a << ") / (" << b1 << " / " << b << ") = " << rez1 << " / " << rez2 << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "RUS");
    d(8, 5, 6, 2); 
    cout << "Десятичные дроби:  " << d(4.9, 2.8) << endl;
}