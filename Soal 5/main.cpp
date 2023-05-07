#include <iostream>
#include <string>

using namespace std;

int price(int age, int height)
{
    int price = 0;
    if (age > 10)
    {
        return 80000;
    }
    else if (age >= 2 && age <= 3)
    {
        price = 30000;
        if (height > 70)
        {
            return price + 10000;
        }
        else
        {
            return price;
        }
    }
    else if (age >= 4 && age <= 7)
    {
        price = 40000;
        if (height > 120)
        {
            return price + 15000;
        }
        else
        {
            return price;
        }
    }
    else if (age >= 8 && age <= 10)
    {
        price = 50000;
        if (height > 150)
        {
            return price + 20000;
        }
        else
        {
            return price;
        }
    }
    else
    {
        return price;
    }
}

int main()
{
    int age, height;

    cout << "Masukkan Umur:";
    cin >> age;
    cout << "Masukkan Tinggi:";
    cin >> height;

    if (age > 1)
    {
        cout << price(age, height);
    }
    else
    {
        cout << "Dilarang masuk";
    }

    return 0;
}
