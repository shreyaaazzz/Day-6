// wap to count the number of words in a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    cout << "Number of words in the string: " << count + 1 << endl;
    return 0;
}