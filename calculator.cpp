#include <iostream>
using namespace std;

int main ()
{
 int Option;
 float ValorDividendos, ValorCota, ValorAlmejado, sum;
 cout 
    << 
    "Olá, bem vindo à FII calc!\n"
    << 
    "Você quer saber o valor que você terá que investir, ou a quantidade de cotas necessárias para o efeito Bola de Neve?\n(digite 1 para valor ou 2 para cotas)" 
    << endl;

 cin 
    >>
    Option;

 if (Option == 2){
   cout 
      << 
      "Digite o valor da cota do FII: "
      << endl;

   cin 
      >>
      ValorCota;

   cout 
      << 
      "Digite o valor pago de dividendos: "
      << endl;
   
   cin 
      >>
      ValorDividendos;

   sum = ValorCota/ValorDividendos;
   int SumReal = static_cast<int>(sum);
   SumReal += 1;

   cout 
      <<
      "Para que o valor de dividendos seja igual ao da cota, você precisa comprar "
      << 
      SumReal 
      << 
      " cotas.\n"
      << 
      "Que é igual à "
      << 
      SumReal*ValorCota
      << 
      " reais."
      << endl;

     
 }else{
    cout 
      << 
      "Digite o valor pago de dividendos: " 
      << endl;

    cin 
      >> 
      ValorDividendos;

    cout 
      << 
      "Digite o valor da cota do FII: " 
      << 
      endl;

    cin 
      >> 
      ValorCota;

    cout 
      << 
      "Digite o a renda mensal almejada: " 
      << 
      endl;
    
    cin 
      >> 
      ValorAlmejado;

    sum = ValorAlmejado/ValorDividendos*ValorCota;

    cout << 
      "O valor de seu investimento terá de ser: " 
      << 
      sum 
      << 
      ". Para que você receba " 
      << 
      ValorAlmejado 
      << 
      " por mês."
      <<
      endl;
 };
  return 0;
}
