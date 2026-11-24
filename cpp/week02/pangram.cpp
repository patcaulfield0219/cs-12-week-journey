#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string s;
    bool found[26] = {false};
    getline(cin, s);
    for(int i=0; i<s.size(); i++){
        if(isalpha(static_cast<unsigned char>(s[i]))){
            int index = 0;
            index = tolower(static_cast<unsigned char>(s[i])) - 'a';
            found[index] = 1;
        }
        
    }
    for(int i=0; i<26; i++){
        if(found[i] == 0){
            cout << "This is not a pangram!" << endl;
            return 0;
        }
    }
    cout << "This is a pangram!" << endl;
    return 0;
}