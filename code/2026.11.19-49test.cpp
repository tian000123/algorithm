#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<string> str = {"apple","orange","banana"};
    for(auto &word:str){
        cout << word << "\n";
    }
    return 0;
}