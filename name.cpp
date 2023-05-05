#include<iostream>
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i = 0 ; input[i] != '\0' ; i++){
        count++;
    }
    return count;

}

int main() {
     char name[100];
     cout<<" enter your name :";
     cin.get(name,100,'o');
    // name[4] = 'x';
     //name[3] = 'd';
    // name[1] = '\0';
     cout<<"NAME :" << name <<endl;

     cout<<"length :" << length(name) <<endl;
     return 0;
}