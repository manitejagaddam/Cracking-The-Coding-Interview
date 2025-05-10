#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;




bool checkEdits(string s1, string s2){
    int len1 = s1.length();
    int len2 = s2.length();
    if(abs(len1 - len2) > 1) return false;

    int odds = 0;

    vector<int> diff(256, 0);
    for(char i : s1){
        diff[i]++;
    }
    for(char i : s2){
        diff[i]--;
    }
    for(int i : diff){
        if(i)odds++;
    }
    if(len1 == len2 && odds == 2) return true;
    return odds <= 1;
}





int main(){
    string s1, s2;
    cout << "Enter the string 1 : ";
    cin >> s1;
    cout << endl << "Enter the string 2 : ";
    cin >> s2;


    if(checkEdits(s1, s2) ){
        cout << "Both the strings " << s1 << " and " << s2 << " are one or zero edits away.";
    }else{
        cout << "Both the strings " << s1 << " and " << s2 << " are more than one edit away.";
    }
}