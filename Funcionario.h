#pragma once
#ifndef Funcionario_H
#define Funcionario_H
using namespace std;
#include <iostream>
#include <vector>
//#include"Quarto.h"

class Funcionario
{
public:
	Funcionario(string nome, string RG);


	void ImprimeNome();
	void Info();
	string GetNome();
	string GetRG();
	int GetNumReser();
	void SetIdReserva(int ID);
	int GetIdReserva(int i);
	void ResInfo(int Q);
	int GetQuartoNum(int i);

private:
	
	//vector<Reserva>reservas;
	string Nome;
	string RG;
	vector<int>IDReserva;
	vector<int>NumroQuarto;
};
#endif
