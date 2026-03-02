#include<bits/stdc++.h>
 using namespace std; 
 int main(){
 
 
      int t; cin >> t; while(t--){
 
        int n, k;
 
        cin >> n >> k;
 
        string s;
 
        cin >> s;
 
        int count = 0;
 
        for(int i = 0; i < n; i++){
 
          if(s[i] == '0'){
 
            count++;
          }else if(s[i] == '1'){
 
            bool onefound = false;
            for(int j = i + 1 ; j <= ( i + k ) && j < n; j++){
 
              if(s[j] == '1'){
 
                onefound = true;
 
                i = j - 1;
                break;
              }
            }
            if(!onefound){
 
              i += k;
            }
            
 
           }
        }
 
        cout << count << endl;
 
      }
    
}
