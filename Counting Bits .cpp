#include <bits/stdc++.h>
using namespace std;

int bits(int a, int i){
    return (a >> i) & 1;
}

int main() {
    int t;cin>>t;

    while(t--){
          int n;
          cin >> n;
          int cnt = 0; 

          for(int i = 1; i <= n; i++){
                for(int j = 0; j < 32; j++){
                      if(bits(i, j)){
                            cnt++;
                      }
              }
       }
       cout << cnt << endl;
 
    }
  
}
