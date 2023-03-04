#include <iostream>
#include <array>
#include <string>
#include <cmath>

using namespace std;

void header()
{
    cout << "--------------------------------------" << endl;
    cout << "<<============KALKULATOR============>>" << endl
         << endl;
    cout << "operator yang bisa dipakai : " << endl;
    cout << "1. tambah (+)" << endl;
    cout << "2. kurang (-)" << endl;
    cout << "3. kali (*)" << endl;
    cout << "4. bagi (/)" << endl;
    cout << "5. modulo (%)" << endl;
    cout << "6. pangkat (**)" << endl;
    cout << "7. akar (//) " << endl;
    cout << "nb : untuk akar hanya angka pertama yang dihitung, isi sembarang angka kedua" << endl
         << endl;
    cout << "--------------------------------------" << endl
         << endl;
}

array<string, 3> inputData()
{
    array<string, 3> data;

    cout << "masukkan angka pertama : ";
    cin >> data[0];
    cout << "masukkan angka kedua : ";
    cin >> data[1];
    cout << "masukkan operator : ";
    cin >> data[2];

    return data;
}

float calculate(float first, float second, string sign)
{
    if (sign == "+")
    {
        return first + second;
    }
    else if (sign == "-")
    {
        return first - second;
    }
    else if (sign == "*")
    {
        return first * second;
    }
    else if (sign == "/")
    {
        return first / second;
    }
    else if (sign == "%")
    {
        return static_cast<int>(first) % static_cast<int>(second);
    }
    else if (sign == "**")
    {
        return pow(first, second);
    }
    else if (sign == "//")
    {
        return sqrt(first);
    }
    else
    {
        cout << "masukkan operator yang benar!" << endl;
    }

    // switch (sign)
    // {
    // case "+":
    //     return first + second;
    //     break;
    // case "-":
    //     return first - second;
    //     break;
    // default:
    //     // code block
    // }
}

bool checkLoop()
{
    string loop;

    cout << "ingin menghitung lagi?(y/n)" << endl;
    cin >> loop;

    cout << "--------------------------" << endl;

    return loop == "y" ? true : false;
}

int main()
{
    bool again = true;

    header();
    while (again)
    {
        array<string, 3> data = inputData();

        cout << "hasil : " << calculate(stof(data[0]), stof(data[1]), data[2]) << endl;

        again = checkLoop();
    }

    cin.get();
    return 0;
}