#include <iostream>
using namespace std;

int main() {
   int n=0, precedente=0, successivo=1, risultato=0;
    cin>>n;
        cout<<1<<endl;
        for(int i=1;i>0 && i<=n;i++) {
            risultato = precedente + successivo;
            if(risultato<=n){
            cout << risultato << endl;}
            precedente = successivo;
            successivo = risultato;
        }
   return 0;
}
