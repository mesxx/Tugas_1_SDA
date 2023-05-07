#include <iostream>
#include <string>

using namespace std;

string numbers(int res)
{
    if (res % 2 == 0)
    {
        return "genap";
    }
    else
    {
        return "ganjil";
    }
}

string position(int res)
{
    if (numbers(res) == "genap")
    {
        if (res >= 50 && res <= 100)
        {
            return "berhak dipilih menjadi capten team";
        }
        else
        {
            return "target attacker";
        }
    }
    else if (numbers(res) == "ganjil")
    {
        if (res > 90)
        {
            return "Playmaker";
        }
        else if (res % 3 == 0)
        {
            return "keeper";
        }
        else if (res % 5 == 0)
        {
            return "keeper";
        }
        else
        {
            return "defender";
        }
    }
    else
    {
        return "tes";
    }
}

int main()
{
    int number;

    cout << "Masukkan Nomor Punggung:";
    cin >> number;

    cout << position(number);

    return 0;
}
