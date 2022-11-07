#include <iostream>
#include <Windows.h>

using namespace std;

string gen_random(int len)
{
    string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string newstr;
    int pos;
    while (newstr.size() != len) {
        pos = ((rand() % (str.size() - 1)));
        newstr += str.substr(pos, 1);
    }
    return newstr;
}

int main()
{
    SetConsoleTitleA("(x64) CESpoofer Kernel-Enori");

    while (true)
    {
        HWND hWnd = FindWindowA(nullptr, "Cheat Engine 7.4");
        if (hWnd != NULL)
        {
            string getNewTitle = gen_random(6);
            cout << "Spoofed CE Title." << endl;
            cout << "New Title: " << getNewTitle << endl;
            SetWindowTextA(hWnd, getNewTitle.c_str());
            cout << "_______________________" << endl;
        }
        Sleep(1000);
    }

    cin.get();
}