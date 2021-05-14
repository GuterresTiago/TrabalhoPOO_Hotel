#include "Cliente.h"

Cliente::Cliente(string Nome,string RG)
{
	this->Nome = Nome;
	this->RG = RG;
}
void Cliente::Info()
{
	cout << "Nome: " << Nome<<endl;
	cout << "RG: " << RG << endl;
	cout << "Numero de resaervas: " << IDReserva.size() << endl;
	for (int i = 0; i < IDReserva.size(); i++)
	{
		cout << "ID reserva: " << IDReserva[i] << endl;
		
	}
	cout << "\n";
}

void Cliente::ImprimeNome()
{
	cout << "Nome do Cliente: " << Nome << endl;
}

string Cliente::GetNome()
{
	return Nome;
}
string Cliente::GetRG()
{
	return RG;
}

int Cliente::GetNumReser()
{
	return IDReserva.size();
}
void Cliente::SetIdReserva(int ID)
{
	IDReserva.push_back (ID);
}
/*int Cliente::GetIdReserva()
{

	return IDReserva[i];
}*/
