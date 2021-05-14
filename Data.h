#pragma once

#ifndef Data_H
#define Data_H
#include <iostream>
using namespace std;
#include <vector>

class Data
{
public:

    Data() {}; // Construtor Padrão
    Data(int d, int m, int a); //construtor personalizado
    void toString(int i);
    void setDia(int d);
    void setMes(int m);
    void setAno(int a);
    void SetTempo(int t);
    int getDia() { return dia; };
    int getMes() { return mes; };
    int getAno() { return ano; };

private:
    vector<int>D;
    vector<int>M;
    vector<int>A;
    vector<int>T;
    int dia;
    int mes;
    int ano;
};
#endif