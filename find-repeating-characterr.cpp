#include <bits/stdc++.h>
using namespace std;

int main(){
  string input = "abcdb";
  int i = 0;
  bool found = false;
  while(i<input.length()){
    for(int j = 0; j<input.length();++j){
      if(input[i] == input[j] && i != j){
        cout<<input[i]<<endl;
        found = true;
      }
    }
    if(found == true){
      break;
    }
    i+=1;
  }
}