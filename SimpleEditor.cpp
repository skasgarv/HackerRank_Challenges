/*
https://www.hackerrank.com/challenges/simple-text-editor
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <string.h>
using namespace std;
/*

Operations:
1. Append data to string
2. Delete last "K" characters from string, by replacing with null characters
3. Print "K" characters of string using for loop
4. Undo any changes made in 1 and 2. Made use of Auxillary stack

Approach: Use Auxillary Stacks
    a. When Aux stack is empty, push any incoming data to stack. If not empty, dont do anything.
       For option 1, take contents of Aux stack and append incoming data. Finally push into aux stack
    b. For option 2, take contents of stack, and remove characters and push new data into stack.
    c. For option 3, take contents of stack and print out data
    d. For option 4, pop aux stack and copy stack with aux.top();

*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //std::stack<string> mystack;
    std::stack<string> aux_stack;

    long long int Q;
    cin>>Q;
    while(Q>0){
        int t,del_no,print_no;
        string W;
        cin>>t;
        if(t==1){
            cin>>W;
            if(/*mystack.empty() && */aux_stack.empty()){
                //mystack.push(W);
                aux_stack.push(W);
            }else{
                string aux_data = aux_stack.top();
                aux_data+=W;
                //mystack.push(aux_data);
                aux_stack.push(aux_data);
            }
        }

        if(t==2){
            cin>>del_no;
            if(aux_stack.empty()){
                continue;
            }
            string del_data = aux_stack.top();
            char new_data[(del_data.size()-del_no)];
            int i=0;
            for(i=0;i<(del_data.size()-del_no);i++){
                new_data[i] = del_data[i];

            }
            new_data[i] = '\0';
            aux_stack.push(new_data);
            //mystack.push(new_data);
        }

        if(t==3){
            cin>>print_no;
            string print_data = aux_stack.top();
            cout<<print_data[print_no-1]<<endl;
        }
        if(t==4){
            aux_stack.pop();
        }
        Q--;
    }
    return 0;
}
