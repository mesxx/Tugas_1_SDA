#include <iostream>
#include <string>

using namespace std;

float price(int running, int pushUp, int plank)
{
    float total = (12 * running) + (6.6 * pushUp) + (5 * plank);
    return total;
}

int main()
{
    int running, pushUp, plank;

    cout << "Masukkan Lama Lari (Menit):";
    cin >> running;
    cout << "Masukkan Lama Push-Up (Menit):";
    cin >> pushUp;
    cout << "Masukkan Lama Plank (Menit):";
    cin >> plank;

    cout << "Jumlah kalori adalah " << price(running, pushUp, plank) << " kal";

    return 0;
}
