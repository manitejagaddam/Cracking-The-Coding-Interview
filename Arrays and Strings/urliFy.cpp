#include <iostream>
#include <cstring>
using namespace std;


/*

Write a method to replace all spaces in a string with '%20. You may assume that the string has sufficient space at the end to hold the additional characters,a nd that you are given the "true" length of the string

EXAMPLE:
Input : "Mr Maniteja Gaddam     ", 18
Output : "Mr%20Maniteja%20Gaddam"

*/

#include <iostream>
#include <cstring>
using namespace std;

void urliFy(char s[], int orgLen) {
    int spaceCount = 0;
    
    for (int i = 0; i < orgLen; i++) {
        if (s[i] == ' ') {
            spaceCount++;
        }
    }

    int newLen = orgLen + spaceCount * 2;

    // Start from the end and fill the string in-place
    for (int i = orgLen - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            s[newLen - 1] = '0';
            s[newLen - 2] = '2';
            s[newLen - 3] = '%';
            newLen -= 3; 
        } else {
            s[newLen - 1] = s[i];
            newLen--;
        }
    }
}

int main() {
    char s[100];
    cout << "Enter the string: ";
    cin.getline(s, 100);

    int orgLen = strlen(s);

    cout << "Original String: " << s << endl;

    urliFy(s, orgLen);

    cout << "Urlified String: " << s << endl;

    return 0;
}
