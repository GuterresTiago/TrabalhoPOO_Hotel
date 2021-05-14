


#ifndef Reserva_H
#define Reserva_H
#pragma once
#include "Quarto.h"
#include "Cliente.h"
#include "Funcionario.h"
#include <iostream>
#include <vector>
#include "Data.h"
//using namespace std;

class Reserva
{
	public:
		Reserva();

		int  ID;
		void AddFunc(string nome,string RG);
		void AddCli(string nome,string RG);
		int  GetaID();
		void SetNovaReserva(string cliente,string funcionario);
		void AddQuarto();
		void ConsultaQ(int N);
		void Info();
		void test();
		void ResInfo();
		void ListaQ();
		void listagem();

private:
	Data data;
	int TotalReser;
	string Data_I;
	string Data_F;
	Quarto quartos[10];
	vector <Cliente> clientes;
	vector <Funcionario> funcionarios;

};
#endif
