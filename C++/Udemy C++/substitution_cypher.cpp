#include <iostream>
#include <string>

using namespace std;

void alphabetEncrypt(string &message, string key, string alphabet); 
void alphabetDecrypt(string &encrypted_str, string key, string alphabet); 


int main(){

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    cout << "Enter a message to encrypt: ";
    string message;
    getline(cin,message);

    alphabetEncrypt(message,key,alphabet);
    cout << "Encrypted: " << message << endl;

    alphabetDecrypt(message,key,alphabet);
    cout << "Decrypted : " << message << endl;

    return 0;
}

void alphabetEncrypt(string &message, string key, string alphabet){
    
    size_t i{};
    for(char c: message){
        
        size_t key_idx = alphabet.find(c);

        // If find(c) doesn't find the current c in the alphabet,
        // then it's not a letter, and cannot be encrypted. Thus we simply
        // add it to the encrypted string and move to the next c.
        if(key_idx == string::npos){ 
            i++;
            continue;
        }
        message.at(i) = key.at(key_idx);
        i++;
    }
}

void alphabetDecrypt(string &encrypted_str, string key, string alphabet){
// Same function as encrypt, just switched the key and alphabet with each other.
    size_t i{};
    for(char c: encrypted_str){
        
        size_t key_idx = key.find(c);
        if(key_idx == string::npos){
            i++;
            continue;
        }
        encrypted_str.at(i) = alphabet.at(key_idx);
        i++;
    }
}