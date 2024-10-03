#include<iostream>
using namespace std;
void encrypt(){
    string sentence;
    int key;
    cout<<"Enter the sentence to be encrypted: ";
    cin>>sentence;
    cout<<"Enter the key: ";
    cin>>key;
    for(int i=0;sentence[i]!='\0';i++){
        cout<<char(((((int)sentence[i])+key) % 26)+97);
    }
}
void decrypt(){
    char sentence;
    int key;
    cout<<"Enter the word to be decrypted: ";
    cin>>sentence;
    cout<<"Enter the key: ";
    cin>>key;
    cout<<"Encrypted number: "<<char(sentence-key);
}
int main(){
    char choice;
    cout<<"Enter a choice \n (e) Encrypt \n (d) Decrypt \n (q) Quit";
    cin>>choice;
    switch(choice){
        case 'e':
            encrypt();
            break;
        case 'd':
            decrypt();
            break;
        case 'q':
            break;
        default:
            cout<<"Your choice is not valid";
    }
}