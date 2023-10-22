#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main(){
	
	// Definindo o multiset.

	multiset<int, greater<int>> ms;

	ms.insert(40);
	ms.insert(30);
	ms.insert(60);
	ms.insert(20);
	ms.insert(50);

	ms.insert(50);
	ms.insert(10);


	for(auto in : ms){
		cout << in << "\n";
	}

	// Inicializando um multiset com outro multiset.

	multiset<int>  ms1(ms.begin(), ms.end());
	ms1.insert(46);

	cout << "\n";
	for(multiset<int>::iterator it = ms1.begin(); it != ms1.end(); it++){
		cout << *it << "\n";
	}
	return 0;
}