//---------------------------------------------------------------------------

#include <vcl.h>

#include <stdio.h>
#include <math.h>
#include <iostream.h>

#define pi 3.14159265



//---------------------------------------------------------------------------

#pragma argsused

float MA[50];
float MX[50];
float Y[50][50];
int Er[50][50];
int M,N,Km,Err;
float Xn,Xk,Dx,b,Eps,C,D,r,Z;


float F(float x)
    {
    return (exp(x)-2*x-2);
    }
int main()

{


cout << "Xn" << " = ";
  cin >> Xn;
  cout << endl;

  cout << "Dx" << " = ";
  cin >> Dx;
  cout << endl;

  cout << "Xk" << " = ";
  cin >> Xk;
  cout << endl;

  cout << "M" << " = ";
  cin >> M;
 cout << "eps" << " = ";
  cin >> Eps;
  cout << endl;

  cout << "C" << " = ";
  cin >> C;
  cout << endl;

  cout << "D" << " = ";
  cin >> D;
  cout << endl;

  cout << "Km" << " = ";
  cin >> Km;
  cout << endl;

 int i;
 for (i=1;i<=M;i++)
 {
   cout<<"vvedite_A=";
   cin >>MA[i];
  }
   cout<<"\n";
   


/*Процедура нахождения корня нелинейного уравнения на заданном интервале с погрешностью Eps*/
float r;
 i=1;
 Err=1;
 while (i<=Km)
{
   Z=(C+D)/2;
   if (fabs(F(Z))>Eps) {
      if (F(C)*F(Z)>0) {
      C=Z;
      }
      else
      D=Z;
      i=i+1;
       }
    else
      {
      i=Km+1;
      Err=0;
      b=Z;
}
}            

if (Err==0)
 {
     cout<<"b"<<"="<<b<<endl;
    r=F(b);
    cout<<"r"<<"="<<r<<endl;
    system("Pause");
/*Процедура заполнения массивов значений аргумента х, значений функции и массива ошибок*/
 int k;
float a,x;
N=ceil((fabs(Xk-Xn)/Dx)+1);
{
for (int i=1; i<= M;i++)
 {a=MA[i];
 cout<<"a"<<"="<<MA[i]<<endl;
   printf("\n");
 x=Xn;
  for (int k=1; k<= N;k++)
   {MX[k]=x;
   cout<<"x"<<"="<<MX[k]<<endl;
     if (x <=0)

      {Y[i][k]=a*cos((pi*a*x)/2);
      cout<<"Y"<<"="<<Y[i][k]<<endl;
      x=x+Dx;
    }
    else
    {
     Y[i][k]=log(exp(a*log(2)))/(b*x+(exp(x*log(3))));
     cout<<"Y"<<"="<<Y[i][k]<<endl;
     x=x+Dx;
    }
  }
 }
}
/*Процедура вывода массивов значений а, значений аргумента х и значений функции*/


}
else
printf("\nKoren' ne naiden za Km ciklov");
system("Pause");
}
//---------------------------------------------------------------------------


