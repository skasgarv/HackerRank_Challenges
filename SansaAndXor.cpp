#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin>>T;
    while(T>0){
        int n;
        cin>>n;
        int a[n];
        int res = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i%2==0){
                res = res^a[i];
            }
        }
        for(int i=0;i<n;i++){
            
        }
        
        if(n%2==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<res<<endl;
        }
        
        T--;
        
    }
    return 0;
}
