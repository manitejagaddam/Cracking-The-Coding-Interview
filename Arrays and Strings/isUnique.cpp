#include <iostream>
#include <vector>
using namespace std;

// Implement an algorithm to determine if a string has all unique characters. What if you cannont use additional data structures?


bool isUnique(string s){
    vector<int> checkArr(256, 0);
    for(char i : s){
        checkArr[i]++;
        if(checkArr[i] > 1) return false;
    }
    return true;
}

int main(){
    string s ;
    cout << "Enter a string : ";
    cin >> s;
    if(isUnique(s)){
        cout << "All the characters in " << s << " is unique";
    }else{
        cout << "All the characters in " << s << " is not unique";
    }

}