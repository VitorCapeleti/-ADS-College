#include <iostream>
using namespace std;

class Conta{
	private: double saldo;
	
	public: Conta(){saldo = 0;}
	
	public: void saldo_atual(){
		cout << "Saldo atual R$ "<< saldo << endl;
	}
	public:  void depositar(){
		cout << "informe o valor para deposito R$: ";
		double valor;
		cin >> valor;
		saldo = saldo+valor;
	}
	public: void sacar(){
		cout<<"informe o valor para saque: ";
		double valor;
		cin >> valor;
		if(valor>saldo){
			cout<<"saldo insuficiente\n";
		}else{
			saldo = saldo-valor;
		}
	}
};
int main(void){
	Conta Andre;
	
	cout<<"Abrindo conta do andre"<<endl;
	Andre.depositar();
	Andre.saldo_atual();
	Andre.sacar();
	Andre.saldo_atual();
	
	cout<<endl;
	
	
	Conta Ana;
	
	cout<<"Abrindo conta do ana"<<endl;

	Ana.depositar();
	Ana.saldo_atual();
	Ana.sacar();
	Ana.saldo_atual();
	
	
	return 0;
}
