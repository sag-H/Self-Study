#include <iostream>
#include <string>

using namespace std;

void pyramid(string str);
string reverseStr(string str); 

int main(){

    string str{};
    cout << "Enter string: ";
    getline(cin,str);
    pyramid(str);

    return 0;
}

void pyramid(string str){
    
    if(str.empty()) return;

    string left{}, right{}, mid{};
    size_t len = str.length();
    size_t whitespace_amount{}, i{};
    
    for(;i < len; i++){

        left = str.substr(0,i);
        mid = str.at(i);
        right = reverseStr(left);

        whitespace_amount = (len-i-1);
        string spaces(whitespace_amount,' ');
        
        cout << spaces + (left + mid + right) + spaces << endl;
    }
}

string reverseStr(string str){

    if(str.empty()) return "";

    size_t s_len = str.length();
    string reversed_str(s_len,' ');
    size_t i = s_len - 1, j{};

    for(;j < s_len; i-- ,j++){
        reversed_str.at(j) = str.at(i);
    }
    return reversed_str;
}