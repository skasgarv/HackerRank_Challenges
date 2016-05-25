/*
https://www.hackerrank.com/challenges/largest-rectangle
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

/*
Source : http://www.geeksforgeeks.org/largest-rectangle-under-histogram/
1) Create an empty stack.
2) Start from first bar, and do following for every bar ‘height[i]’ where ‘i’ varies from 0 to n-1.
    a) If stack is empty or height[i] is higher than the bar at top of stack, then push ‘i’ to stack.
    b) If this bar is smaller than the top of stack, then keep removing the top of stack while top of the stack is greater. Let          the removed bar be height[index]. Calculate area of rectangle with height[index] as smallest bar. For height[index], the          ‘left index’ is previous (previous to tp) item in stack and ‘right index’ is ‘i’ (current index).
3) If the stack is not empty, then one by one remove all bars from stack and do step 2.b for every removed bar.
*/


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //assuming width to be 1
    int N,area=0,max_area=0;
    cin>>N;
    int height[N];
    //input height data
    for(int i=0;i<N;i++){
        cin>>height[i];
    }
    //create a stack
    std::stack<int> mystack;
    int i=0;
    while(i<N){
        if(mystack.empty() || height[mystack.top()]<=height[i]){
            mystack.push(i++); //push the index into stack
        }else{
            int index = mystack.top(); //get the index value from stack
            mystack.pop();
            area = height[index]*(mystack.empty()? i : i-mystack.top()-1); //find individual area
            if(area>=max_area){
                max_area =  area;
            }
        }
    }
    while(mystack.empty()==false){
        int index = mystack.top();
        mystack.pop();
        area = height[index]*(mystack.empty()? i : i-mystack.top()-1);
        if(area>=max_area){
            max_area = area;
        }
    }
    cout<<max_area<<endl;
    return 0;
}
