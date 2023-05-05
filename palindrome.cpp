#include<iostream>
#include<string>
using namespace std;


bool checkPalindrome(char str[]){

  int i = 0;
  
  
   string st(str);
 int len =   st.length();
  int j = len -1;
  while( i <= j){
      if(st[i] != st[j]){
          return false;
      }
      else{
          i++;
          j--;
      }
  }
return true;

}


int main() {
     
     char ch[100]={'m','a','l','a','y','a','l','a','m','\0'};
     
     cout <<boolalpha;
     cout << checkPalindrome(ch) <<endl;
     
     return 0;
}