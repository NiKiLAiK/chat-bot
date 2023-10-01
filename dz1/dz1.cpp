#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {

    while (true) {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        string user_input;
        cin >> user_input;
        if (user_input == "привет") {
            cout << "Привет!" << endl;
        }
        else if (user_input == "пока") {
            cout << "Пока!"; 
            break;
        }
        else {
            cout << "Я не совсем понимаю вас." << endl;
        }
    }

    return 0;
}