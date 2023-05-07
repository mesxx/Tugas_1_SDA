#include <iostream>
#include <string>

using namespace std;

string coding(int res)
{
    if (res > 80)
    {
        return "LOLOS";
    }
    else if (res >= 60)
    {
        return "DIPERTIMBANGKAN";
    }
    else
    {
        return "GAGAL";
    }
}

string interview(string res)
{
    if (res == "A" || res == "B")
    {
        return "LOLOS";
    }
    else
    {
        return "GAGAL";
    }
}

int main()
{
    string interviewRes;
    int codingRes;

    cout << "Masukkan Nilai Coding:";
    cin >> codingRes;
    cout << "Masukkan Nilai Interview:";
    cin >> interviewRes;

    cout << coding(codingRes);
    cout << interview(interviewRes);

    if (interview(interviewRes) == "LOLOS" && coding(codingRes) == "LOLOS" || coding(codingRes) == "DIPERTIMBANGKAN")
    {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer";
    }
    else
    {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer";
    }

    return 0;
}
