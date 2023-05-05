#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

string removewhitespace(string s){

auto it = s.begin();

int i=0;
while(i<s.size()){

    string str(1,s[i]); // this is how we convert char to string.

    if(str ==" "){
        it = it+i;

        s.erase(it);
    }
i++;
}
return s;
}
int main() {

    cout << removewhitespace("abc tg kl") << endl;
     return 0;
}