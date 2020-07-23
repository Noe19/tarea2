#include <iostream>
using namespace std;

void ingresarpares(int a[],int n);
void imprimir_pares(int a[],int n);
void burbuja(int a[],int n);


int main()
{

int m[5],jk[10],i,k=0,d;

  ingresarpares(m,i);
  imprimir_pares (m,i);
  burbuja(m,i);
 
 return 0;
 }

 void ingresarpares(int a[],int n){
   int i,d;
   int m[100],jk[100];
 for (i=2;i<10;i++){
	cout<<"ingrese el numero par : " <<m[i];
	cin>>m[i];
	 
	}
 
 }
void imprimir_pares(int a[],int n){
int i,d,k=0;
   int m[100],jk[100];
  for (i=0;i<10;i++){
 if  	(m[i]%2==0)
 	{
 		jk[k]=m[i];k++;
	 }
 }
}

void burbuja(int a[],int n){

cout<<"Los pares son "<<endl;
int i,d,k=0;
   int m[100],jk[100];
 for (i=0;i<10;i++){
 	{
 		cout<<endl<<jk[i];
	 }
 }

}