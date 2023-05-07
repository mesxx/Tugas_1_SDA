#include <iostream>
#include <string>

using namespace std;

string live(string place, string suspect)
{
    if (suspect == "Don" && place == "Nevada" || place == "New York" || place == "Havana")
    {
        return "Don";
    }
    else if (suspect == "Underboss" && place == "New Jersey" || place == "Manhattan" || place == "Nevada")
    {
        return "Underboss";
    }
    else if (suspect == "Capo" && place == "California" || place == "Detroit" || place == "Boston")
    {
        return "Capo";
    }
    else
    {
        return 0;
    }
}

string cond(string name, int age, string place, int money)
{
    if (age > 40 && money > 10000000 && live(place, "Don") == "Don")
    {
        return name + " kemungkinan adalah seorang anggota mafia dengan pangkat Don";
    }
    else if (age >= 25 && age <= 40 && money >= 1000000 && money <= 2000000 && live(place, "Underboss") == "Underboss")
    {
        return name + " kemungkinan adalah seorang anggota mafia dengan pangkat Underboss";
    }
    else if (age >= 18 && age <= 24 && money < 1000000 && live(place, "Capo") == "Capo")
    {
        return name + " kemungkinan adalah seorang anggota mafia dengan pangkat Capo";
    }
    else
    {
        return name + " tidak mencurigakan";
    }
}

int main()
{
    string name, place;
    int age, money;

    cout << "Masukkan Nama:";
    cin >> name;
    cout << "Masukkan Umur:";
    cin >> age;
    cout << "Masukkan Tempat Tinggal:";
    cin >> place;
    cout << "Masukkan Uang Tabungan:";
    cin >> money;

    cout << cond(name, age, place, money);

    return 0;
}
