
#include <iostream>
#include <map>

using namespace std;

int main()
{   
    // Definindo um map.
    map<string, int> mp;
    mp["ronaldo"] = 29;
    mp["vanessa"] = 25;
    mp["rafaela"] = 17;

    // Verificando as chaves e os valores do map.
    
    auto it = mp.begin();
    while(it != mp.end()){
        cout << "Chave : " << it->first << " - " << "Valor: " << it->second << "\n";
        it++;
    }
    
    cout << "Tamanho do map: " << mp.size() << "\n";
    
    //Inserindo elementos chave-valor no map.
    
    mp.insert(make_pair("carol", 26));
    mp.insert(make_pair("renata", 31));
    
    for(auto value : mp){
        cout << "Chave: " << value.first << " - " << "valor: " << value.second << "\n";
    }
    
    return 0;
}
