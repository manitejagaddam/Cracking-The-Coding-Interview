#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;



bool isPalindrome(string s){

    unordered_map<char, int> mpp;
    for(auto i : s){
        if(i == ' ') continue;
        mpp[i]++;
    }
    int odd = 0;

    for(auto i : mpp){
        if(i.second & 1) odd++;
    }
    return odd <= 1;
}


int main(){
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    if(isPalindrome(s)){
        cout << s << " is a Palindromic Permutation string";
    }else{
        cout << s << " is not a Palindromic Permutation string";
    }
}