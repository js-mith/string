#include<iostream>
#include<cstring>
using namespace std;


void printallprefixes(char input[]){
    //i represent end index
     for(int i = 0 ; input[i] != '\0' ; i++){
        //j represent start index
        for(int j =0 ; j<=i ; j++){
            cout<<input[j];
        }
        cout<<endl;

     }
 
}

int main() {
    char input[100]= "abcd";
    printallprefixes(input);



    /*
    char input1[100] = "abcd";
     char  input2[100]= "def";
     
     cout<< " befor copying :" ;
     cout<<"input1 :" << input1 <<endl;
     cout<< " input2 :"<< input2 <<endl;
     strncpy(input1 , input2 , 3);
     cout<<"after copying :";
     cout<<"input1 :"<< input1 <<endl;
     cout<<"input2 :"<< input2 <<endl;






   // cin>>input1;
    //cin>>input2;
    /*
    if(strcmp(input1 , input2) == 0){
        cout<<"true" << endl;
    }
    else{
        cout<<"false" <<endl;
    }
     */
     return 0;
}