#include <iostream>
#include <string>
#include <vector>
using namespace std;


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
