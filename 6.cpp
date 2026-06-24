// wap to write a code for Anagram Check
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    // Check if the lengths are equal
    if (str1.length() != str2.length()) {
        cout << "The strings are not anagrams." << endl;
        return 0;
    }

    // Create frequency arrays for both strings
    int freq1[256] = {0};
    int freq2[256] = {0};

    // Count frequency of each character in both strings
    for (int i = 0; i < str1.length(); i++) {
        freq1[str1[i]]++;
        freq2[str2[i]]++;
    }

    // Compare the frequency arrays
    bool isAnagram = true;
    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}