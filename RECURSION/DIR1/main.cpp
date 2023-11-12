#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverse(vector<int> &v, int l, int r){
    // caso base.

    if(l >= r){
        return;
    }else{
        swap(v[l], v[r]); // inverte os elementos.
        reverse(v, l + 1, r - 1); // chamada recursiva.
    }
}

int main(){
    vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int l = 0;
    int r = v.size() - 1;

    reverse(v, l, r);

    for(auto value = v.begin(); value != v.end(); value++){
        cout << *value << " ";
    }
    cout << "\n";
    return 0;
}