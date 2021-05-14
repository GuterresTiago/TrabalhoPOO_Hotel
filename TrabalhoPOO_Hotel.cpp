// TrabalhoPOO_Hotel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"Quarto.h"
#include <iostream>
#include "Reserva.h"


int main()
{

	Reserva F;
	
	F.AddQuarto();
	F.AddFunc("Alberto", "4567");
	F.AddFunc("Jorge",   "1234");
	F.AddFunc("Toretto", "9876");

	F.AddCli("Cladia", "5555");
	F.AddCli("Tim",    "9999");
	F.AddCli("Godofredo", "4567");
	F.AddCli("Creusa", "6549");
	cout << "\n\n " << endl;
	cout << "Bem Vindo ao Hotel: "<<endl;
	cout << "******************* \n\n " << endl;
	
	int a=1;
	string Cli, RGCli;
	string FU, RGFU;


	while (a != 0)
	{
		cout << "1-Cadastrar Cliente: "<<endl;
		cout << "2-Cadastrar Funcionario: "<<endl;
		cout << "3-Ver Lista de Quartos: "<<endl;
		cout << "4-Efetua Reserva: "<<endl;
		cout << "5-Consulta Geral: "<<endl;
		cout << "5-Consulta Quarto especifico: " << endl;
		cout << "0-Sair: " << endl;

		cin >> a;



		switch (a)
		{
		case 1:
			cout << "Cadastro de clientes: "<<endl;
			cout << "Nome: " << endl;
			cin >> Cli;
			cout << "RG: " << endl;
			cin >> RGCli;
			F.AddCli(Cli, RGCli);
			
			break;
		case 2:
			cout << "Cadastro de Funcionario: " << endl;
			cout << "Nome: " << endl;
			cin >> FU;
			cout << "RG: " << endl;
			cin >> RGCli;
			F.AddCli(FU, RGFU);
			
			break;
		case 3:
			F.ListaQ();
			break;
		case 4:
			F.listagem();
			cout << "NNova Reserva: " << endl;
			cout << "Nome do Cliente: " << endl;
			cin >> Cli;
			cout << "Nome do Atendente: : " << endl;
			cin >> FU;
			F.SetNovaReserva("Tim", "Alberto");
			
			break;
		case 5:
			F.Info();
			break;
		case 6:
			int b;
			cout << "Numero do Quarto: " << endl;
			cin >> b;
			F.ConsultaQ(b);
			break;
		}



	}


}


