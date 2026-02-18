#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"vowel checker"<<endl;
    cout<<"enter a character:";
    cin>>ch;
    if((ch >='a'&&ch <= 'z')||(ch >= 'A'&&ch <= 'Z')){

    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':

        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
     cout<<ch<<" is a vowel"<<endl;
     break;
    default:
        cout<<ch<<" is a constant";
            }
        }
            else{
                cout<<"not a letter";
            }
            return 0;
        } 
    
        
