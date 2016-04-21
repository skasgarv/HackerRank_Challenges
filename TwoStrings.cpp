#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string a,b;
    int T,storage1[26],storage2[26],i,flag;
    cin>>T;
    while(T>0){
        flag=0;
        for(i=0;i<26;i++){
            storage1[i]=0;
            storage2[i]=0;
        }
        cin>>a;
        cin>>b;
        for(i=0;i<a.size();i++){
            storage1[a[i]-97] = 1;
        }
        for(i=0;i<b.size();i++){
            storage2[b[i]-97] = 1;
        }

        for(i=0;i<26;i++){
            if(storage1[i]+storage2[i]==2){
                flag = 1;
                break;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

        T--;

    }
    return 0;
}
