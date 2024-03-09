#include <iostream>
using namespace std;
class Vetor{
	private: int v[100], n;	
	public: Vetor(){
	 n=0;
	}
	
	public: void insercao(){
		 
        // Inserindo valores no vetor
        cout << "Informe 10 valores inteiros para o vetor" << endl;
        int i;
        for(i=0; i<10; i++) {
                cin >> v[i];
                n++;
        }
	}
	
	public: void mostrando(){
		        // Mostrando valores no vetor
		        int i;
        cout << "\nMostrando todos elementos do vetor" << endl;
        for(i=0; i<n; i++) {
                cout << " " << v[i];
        }
        cout << endl;
	}
	
	public: void buscando(){
		// Buscando valores no vetor
        cout << "\nForneca um valor para busca: ";
        int i;
        int chave;
        cin >> chave;
        for (i=0; i<n; i++) {
                if ( v[i] == chave ) { break; }
        }
        if (i == n) { cout << "Chave NAO encontrada" << endl; }
        else { cout << "Chave encontrada no indice " << i << endl; }
 
	}
	
	public: void remover(){
		        // Removendo valores no vetor
        cout << "\nForneca um valor para remocao: ";
        int i;
        int chave;
        cin >> chave;
        for (i=0; i<n ;i++) {
                if (v[i] == chave) {
                        if (i != (n-1)) {
                                for(int k=i; k<(n-1); k++)  v[k]=v[k+1];
                        }
                n--;
                break;
                }
        }   
	}
	
	public: void mostrandovalor(){
		// Mostrando valores no vetor
        cout << "\nMostrando todos elementos do vetor" << endl;
        int i;
        for(i=0; i<n; i++) {
                cout << " " << v[i];
        }
        cout << endl;
 
	}
	
	
};

int main(void) {
	Vetor Teste;
	
	Teste.insercao();
	Teste.mostrando();
	Teste.buscando();
	Teste.remover();
	Teste.mostrandovalor();
        
        return 0;
}
