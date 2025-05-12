#include <iostream>
#include <string>
#include <vector>
using namespace std;


/*

String Compression : Implement a method to perform basic string copression using the counts of repeated characters.
For Example the string "aaaabbbccd" would become "a4b3c2d1".
If the compressed string wouldnt become smaller than the original string, your method should return the original string.
You can assume the string has only uppercase and lowercase letters(a - z);

*/


string stringCompress(string & s){
    int len = s.length();
    string temp = "";
    for(int i = 0 ; i < len ; i++){
        int count = 1;
        int j = i + 1;
        while(s[j] == s[i]){
            j++;
            count++;
        }
        temp += s[i];
        temp += to_string(count);
        i = j - 1;
    }
    return temp;
}



int main(){
    string s;
    cout << "Enter the String for Compression : ";
    cin >> s;
    cout << endl;
    cout << "The String Before Compresssion : " << s << endl;

    string modString = stringCompress(s);
    cout << "The String After Compression : " << modString << endl;

}
