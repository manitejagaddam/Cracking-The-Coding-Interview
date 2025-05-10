#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;


/*

Given Two strings, write a method to decide if one is a permutation of the other or not

example: 
s1 = listen
s2 = silent

both are permutated strings


example: 
s1 = hello
s2 = helo

both are not permutated strings

*/


bool checkPermutation(string s1, string s2){
    
    
    // This is better solution
    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());

    // if(s1.length() != s2.length()) return false;

    // int len = s1.length();

    // for(int i = 0 ; i < len ; i++){
    //     if(s1[i] != s2[i]) return false;
    // }
    // return true;

    /*
        Time complexity : O(N logN )
        Space Complexity : O(1)
    */



    // Optimal Solution

    vector<int> checkArr(256, 0);
    if(s1.length() != s2.length()) return false;
    int len = s1.length();
    for(int i = 0 ; i < len ; i++){
        checkArr[s1[i]]++;
        checkArr[s2[i]]--;
    }

    for(int i : checkArr){
        if(i) return false;
    }
    return true;


    /*
        Time Complexity : O(N + N);
        Space Complexity : O(256);
    */

}



int main(){

    string s1, s2;
    cout << "Enter the string 1 : ";
    cin >> s1;
    cout << endl << "Enter the string 2 : ";
    cin >> s2;

    if(checkPermutation(s1, s2)){
        cout << "Both the strings " << s1 << " and " << s2 << " are permutated.";
    }else{
        cout << "Both the strings " << s1 << " and " << s2 << " are not permutated.";
    }

}