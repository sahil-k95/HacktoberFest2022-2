
#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(char str[]) {
   //  int m= strlen(str);
       for(int i=0;i<= strlen(str)/2;i++)
           if(str[i]!=str[strlen(str)-1-i])
               return false;
    
    return true;
    
    }  
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}

// here you test samples inputs are given below
// Sample Input 1 :
// abcdcba
// Sample Output 1 :
// true 
// Sample Input 2:
// coding
// Sample Output 2:
// false


