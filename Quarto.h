#pragma once

#ifndef Quarto_H
#define Quanto_H

#include <iostream>
using namespace std;

class Quarto
{
public:
	Quarto() {};

	int GetCamas();
	int GetCapacidade();
	void SetQuarto(int Numero, string Categoria, int Camas, int Capacidade,int Valor);
	void Info();
	int GetNumero();
	bool GetOcupado();
	bool SetOcupado();
private:
	string Categoria;
	int Valor;
	int Camas;//0casal 1solteiro
	int Numero;
	int Capacidade;
	bool Ocupado;
};

#endif