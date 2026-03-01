#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;

    string result;
    string vowels = "aoyeuiAOYEUI";

    for (char c : s) {

        if (vowels.find(c) != string::npos) {
            continue;
        }

        result += '.';
        result += tolower(c);
    }

    cout << result << endl;
    return 0;
}
