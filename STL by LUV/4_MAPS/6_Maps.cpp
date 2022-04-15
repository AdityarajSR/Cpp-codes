/* Given N strings, and q queries
in each query you are given a string  
print frequency of that string 
N <= 10^5
q <= 10^6
|S| <= 100
AGAR YE  |S| <= 10000 hoga to complexity bohot zyada badi hogi]   */
       
          /*    CAN ALSO BE DONE USING ORDERED MAPS
              BUT IDHAR HAMARI COMPLEXITY 0(1) KI HO RAHI HAI 
              ISLIYE YAHI USE KAR RAHE HAI HUM */
              
#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map <string, int> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        m[s]++; 
    }
    int q;
    cin>>q;
    while (q--)
    {
        string s;
        cin >> s;
        cout<<m[s]<<endl;
    }
    
    for(auto pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}