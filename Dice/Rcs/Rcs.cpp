#include <iostream>

using namespace std;

//Declaração de variáveis
	struct Cliente{	//Definindo a estrutura de cadastro
		string nome;
		int idade;
		float score;	//Uma pontuação qualquer do cliente
		float saldo;
	};
	int n=0;	/* Número de cadastro cadastrados (reseta toda vez que é
	resetado */
	Cliente cadastro[1000];
	int menu_select;
	
int main (){
	
	//Menú inicial:
	while(menu_select != 4){
		cout<<"[1] Adicionar cliente\n";
		cout<<"[2] Remover cliente\n";
		cout<<"[3] Mostrar cadastro\n";
		cout<<"[4] Sair;"<<endl;
		cout<<"Digite opção: ";
		cin>>menu_select;
		cout<<endl;
		
		if(menu_select==1){
			void add_cli(int,Cliente[]);
			add_cli(n,cadastro);
			n++;
		}
		if(menu_select==2){
			void dell_cli(int,Cliente[]);
			dell_cli(n,cadastro);
			n--;
		}
		if(menu_select==3){
			void show_cli(int, Cliente[]);
			show_cli(n,cadastro);
		}
	}
	return 0;
}

//Adicionar cliente
void add_cli(int n, Cliente cadastro[]){
	cout<<"\n--------------------------\n";
	cout<<"Nome do cliente: ";
	cin>>cadastro[n].nome;
	cout<<"\nIdade do cliente: ";
	cin>>cadastro[n].idade;
	cout<<"\nScore do cliente: ";
	cin>>cadastro[n].score;
	cout<<"\nSaldo do cliente: ";
	cin>>cadastro[n].saldo;
	cout<<"\n--------------------------\n";
}

//Remover cliente
void dell_cli(int n,Cliente cadastro[]){
	int m;
	cout<<"\n--------------------------\n";
	void show_cli(int,Cliente[]);
	show_cli(n,cadastro);
	cout<<"Cliente a remover: ";
	cin>>m;
	while(m-1<=n){
		cadastro[m-1]=cadastro[m];
		m++;
	}
	cout<<"\n--------------------------\n";
}

//Mostrar cadastro
void show_cli(int n, Cliente cadastro[]){
	int i=0;
	cout<<"\n.....................................\n";
	cout<<"\nN° |\tNome\tIdade\tScore\tSaldo\n";
	while(i<n){
		cout<<i+1<<"  |\t"<<cadastro[i].nome<<"\t"<<cadastro[i].idade<<"\t";
		cout<<cadastro[i].score<<"\t"<<cadastro[i].saldo<<endl;
		i++;
	}
	cout<<"\n.....................................\n";
}
