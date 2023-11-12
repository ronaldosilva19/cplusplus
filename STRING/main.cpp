#include <iostream>
#include <string>
#include <vector>
#include <ios>
#include <limits>
#include <set>
#include <sstream>

using namespace std;

void CreateVectorStrings(vector<string> &vs, int n){
    string s;
    for(int i = 0; i < n; i++){
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, s);
        vs.push_back(s);
    }
}

void PrintVectorStrings(vector<string> &vs){
    for(auto value = vs.begin(); value != vs.end(); value++){
        cout << *value << "\n";
    }
}

int main(){

    vector<string> vs;
    
    int n;
    // cin >> n;
    //CreateVectorStrings(vs, n);
    //PrintVectorStrings(vs);
    
    string s = "O brasil e um pais maravilhoso para se morar morar bem";

    // Criando um objeto do tipo stringstream.

    stringstream obj(s);

    string tmp;
    set<string> ss;

    while(obj >> tmp){
        ss.insert(tmp);
    }

    for(auto value = ss.begin(); value != ss.end(); value++){
        cout << *value << "\n";
    }
    return 0;
}