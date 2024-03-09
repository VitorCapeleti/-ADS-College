#include <iostream>
using namespace std;
class Vetor{
	private: int v[100], n;	
	public: Vetor(){
	 n=0;
	}
	
	public: void insercao(int chave){
		 
		v[n]=chave;
		n++;
		
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
	
	public: int buscando(){
		// Buscando valores no vetor
        cout << "\nForneca um valor para busca: ";
        int chave;
        cin >> chave;
        for (int i=0; i<n; i++) {
                if ( v[i] == chave ) return i;
        }
        return -1;
 
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
	
	cout<<"Forneca 5 valores inteiros: ";
	int chave;
	for(int i=0; i<5; i++){
		cin>>chave;
		Teste.insercao(chave);
	}
	
	
	Teste.mostrando();
	
	int retorno;
	retorno = Teste.buscando();
	if (retorno == -1){
		cout<<"Valor nao encontrado\n";
	}else{
		cout<<"Valor encontrado na posicao"<<retorno<<endl;
	}
	
	Teste.remover();
	Teste.mostrandovalor();
        
        return 0;
}
