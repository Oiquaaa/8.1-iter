#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Введіть рядок: ";
    getline(cin, s);

    for (int i = 0; i < s.size() - 2; i++) {
        if (s[i] == 'O' && s[i + 1] == 'G' && s[i + 2] == 'O') {
            s[i] = '*';
            s[i + 1] = '*';
            s[i + 2] = ' ';
        }
        if (s[i] == 'A' && s[i + 1] == 'G' && s[i + 2] == 'A') {
            s[i] = '*';
            s[i + 1] = '*';
            s[i + 2] = ' ';
        }
    }

    cout << "Результат: " << s << endl;

    return 0;
}
