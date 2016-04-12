#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string a;
    int T,i,j,sum=0;
    int storage1[26],storage2[26];
    double flag=0;
  
    cin>>T;
    while(T>0){
        cin>>a;
        sum=0;
        for(i=0;i<26;i++){
            storage1[i]=0;
            storage2[i]=0;
        }
        if(a.size()%2!=0){
            cout<<"-1"<<endl;
        }else{
            for(i=0;i<a.size()/2;i++){
                storage1[a[i]-97]++;
            }
            for(i=a.size()/2;i<a.size();i++){
                storage2[a[i]-97]++;    
            }
            
            for(i=0;i<26;i++){
                sum = sum + abs(storage1[i]-storage2[i]);   
            }
            cout<<sum/2<<endl;
        }
        T--;
    }
    return 0;
}
