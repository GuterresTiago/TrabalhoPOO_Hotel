#include "Data.h"
Data::Data(int d, int m, int a)
{
    dia = d;
    mes = m;
    ano = a;
}
void Data::SetTempo(int t)
{
    T.push_back(t);
}
void Data::setDia(int d)
{
   
    D.push_back(d);
   
}
void Data::setMes(int m)
{
 
    M.push_back(m);
   
}
void Data::setAno(int a)
{
  
    A.push_back(a);

   
}
void Data::toString(int i)
{
    cout << D[i] << "/" << M[i] << "/" << A[i] <<"Total de dias: "<< T[i] << endl;
}