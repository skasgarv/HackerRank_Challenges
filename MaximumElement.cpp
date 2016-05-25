/*
https://www.hackerrank.com/challenges/maximum-element
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    std::stack<int> mystack;
    std::stack<int> auxstack;
    long long int N,type,x,max=0;
    cin>>N;
    while(N>0){
       // cout<<"Inside While:"<<N<<endl;
        cin>>type;
        if(type ==1){
            cin>>x;
            mystack.push(x);
            if(x>=max){
                max = x;
            }
            auxstack.push(max);
        }else if(type ==2){
            auxstack.pop();
            if(auxstack.empty()==true){
                max =0;
            }else{
                max = auxstack.top();    
            }
            mystack.pop();
        }else if(type ==3){
            cout<<max<<endl;
        }
        //cout<<mystack.top()<<" ";
        
        N--;
    }
    return 0;
}
