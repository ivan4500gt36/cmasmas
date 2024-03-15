#include <iostream>
using namespace std;
main()
{
	
	int entrada,numero1,numero2,acumulado;
	cout<<"Tablas de munltiplicar\ningrese 1 para impar o 2 para par\n";
	cin>>entrada;
	if(entrada==1)
	 	{
	 		cout<<"numeros impares"<<endl;
	 	for(numero1=1;numero1<=10;numero1=numero1+2) // modifica las tablas
	 		{
	 			for(numero2=1;numero2<=10;numero2=numero2+1)  // modifica numero de tablas
					{
						acumulado=numero1*numero2;
						cout<<numero1<< " * "<<numero2<<" = "<<acumulado<<endl;
					} 	
			}
		 	
		}
	else
	{
		if(entrada==2)
	 	{
	 		cout<<"numero pares"<<endl;
	 	for(numero1=0;numero1<=10;numero1=numero1+2) // modifica las tablas
	 		{
	 			for(numero2=1;numero2<=10;numero2=numero2+1)  // modifica numero de tablas
					{
						acumulado=numero1*numero2;
						cout<<numero1<< " * "<<numero2<<" = "<<acumulado<<endl;
					}	
			}	
		}	
	}
	cout<<"error no digito ni 1 ni 2";
							
}
