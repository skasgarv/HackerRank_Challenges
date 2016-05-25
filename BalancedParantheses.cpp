/*
https://www.hackerrank.com/challenges/balanced-parentheses/submissions/code/20702651
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

/*
Algorithm:
1) Declare a character stack S.
2) Now traverse the expression string exp.
    a) If the current character is a starting bracket (‘(‘ or ‘{‘ or ‘[‘) then push it to stack.
    b) If the current character is a closing bracket (‘)’ or ‘}’ or ‘]’) then pop from stack and if the popped character is the matching starting bracket then fine else parenthesis are not balanced.
3) After complete traversal, if there is some starting bracket left in stack then “not balanced”

http://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/

*/
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,top=-1,i=0;
    bool flag = false;
    cin>>T;
    while(T>0){
        std::stack<char> mystack;
        string S;
        cin>>S;
        i=0;
        while(S[i]){
            if(S[i]=='(' || S[i]=='{' || S[i]=='['){
                mystack.push(S[i]);
            }
            if(S[i]==')' || S[i]=='}' || S[i]==']'){
                if(mystack.empty()){
                    flag = false;
                    break;
                }
                if(abs(mystack.top()-S[i])<=2){
                    flag = true;
                    mystack.pop();
                }else{
                    flag = false;
                    break;
                }                  
            }
            i++;
        }
        T--;
        if(flag && mystack.empty()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }
    return 0;
}
