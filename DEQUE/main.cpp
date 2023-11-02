#include <iostream>
#include <iterator>
#include <deque>

using namespace std;

void PrintDeque(deque<int> &dq){
    for(deque<int>::iterator it = dq.begin(); it != dq.end(); it++){
        cout << *it << " ";
    }
    cout << "\n";
}
int main(){
    // Criando deque. No deque, tanto a insercao como a remocao 
    //de elementos pode ser realizada no inicio ou final do container. 

    deque<int> dq;

    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(50);
    dq.push_front(100);
    dq.push_back(90);
    dq.push_front(80);

    PrintDeque(dq);

    // Removendo elemento no inicio e final do deque.

    dq.pop_back();
    dq.pop_front();

    PrintDeque(dq); 
    return 0;
}