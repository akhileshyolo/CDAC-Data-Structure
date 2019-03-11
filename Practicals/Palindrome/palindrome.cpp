#include<iostream>
#include<vector>
#include<cstdlib>
#include<string>
#include<stdexcept>

using namespace std;

bool isPalindrome(const string s){

        Stack<char> stk_char;

        //Pushing all chars of string into stack
        for(int i=0;i<s.length();i++)
                stk_char.push(s[i]);

        //Comparing in reverse order with top()

        for(int i=0;i<s.length();i++)
                if(stk_char.top()!=s[i]) return false;
                else
                        stk_char.top();

        //If for loop nothing returns, then its palindrome
        return true;

}



int main(){


}
