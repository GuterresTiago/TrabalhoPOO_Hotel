#pragma once
#ifndef Cliente_H
#define Cliente_H
using namespace std;
#include <vector>
#include <iostream>
using namespace std;

class Cliente
{
public:
	Cliente(string nome,string RG);

	void ImprimeNome();
	void Info();
	string GetNome();
	string GetRG();
	int GetNumReser();
	void SetIdReserva(int ID);
	int GetIdReserva();

private:
	string Nome;
	string RG;
	//int NumReservas=1;
	//int IDReserva[50];
	vector<int>IDReserva;
	

};
#endif
