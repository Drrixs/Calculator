#include <iostream>

using namespace std;


void printLogo() {

    cout << "██████  ██████  ██████  ██ ██   ██ ███████" << endl;
    cout << "██   ██ ██   ██ ██   ██ ██  ██ ██  ██     " << endl;
    cout << "██   ██ ██████  ██████  ██   ███   ███████" << endl;
    cout << "██   ██ ██   ██ ██   ██ ██  ██ ██       ██" << endl;
    cout << "██████  ██   ██ ██   ██ ██ ██   ██ ███████" << endl;
}



int main() {

    printLogo();

    int plus, minus;
    char clen;

    cout << "Введите ваш пример ниже" << endl << "Например: 666+666, 666*666, 666-666, 666/666." << endl;

    cin >> plus >> clen >> minus;

    if (clen == '/' && minus == 0) {
        cout << "Хватит делить на ноль еблан!" << endl;
        return 1;
    }

    cout << "╔══════════════════════╗" << endl;
    cout << "║        Результат     ║" << endl;
    cout << "╟──────────────────────╢" << endl;

    if (clen == '+') {
        cout << "║ " << plus << " + " << minus << " = " << plus + minus;
    } else if (clen == '-') {
        cout << "║ " << plus << " - " << minus << " = " << plus - minus;
    } else if (clen == '*') {
        cout << "║ " << plus << " * " << minus << " = " << plus * minus;
    } else if (clen == '/') {
        cout << "║ " << plus << " / " << minus << " = " << plus / minus;
    } else {
        cout << "║ Пошел нахуй!";
    }

    cout << "                         " << endl;
    cout << "╚══════════════════════╝" << endl;

    return 0;
}
