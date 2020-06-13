#include<iostream>
#include<stdlib.h>
using namespace std;
int n,m,k,i,j;
int y=0;

void algoritmo(){
    cout<<"\n ESCRIBE EL NUMERO DE SOLCITADOS, APARTAMENTOS Y MAXIMO PERMITIDO: ";
    cin>>n>>m>>k;
    int a[n]; 
    int b[m];
      cout<<"\n  DEPARTAMENTOS SOLCITADOS : ";
    for(i=1;i<=n;i++)
	{
		cin>>a[i];
    }
    cout<<"\n DEPARTAMENTOS DISPONIBLES: ";
    for(j=1;j<=m;j++)
	{
		cin>>b[j];
    }
    n = sizeof(a) / sizeof(a[0]); 
    m = sizeof(b) / sizeof(b[0]); 
    
   	for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
        {
    	    if(y<m)
        	{
                if(abs(a[i]<=(b[j]+k))&&(a[i]<=(b[j]-k)))
                {
			    y+=2;
  		    	a[i]=a[i+1];
			    b[j]=b[j+1];
		        }
	    	}
    	}
    }

}
int main (){
    algoritmo();
    cout<<"\n Las personas aceptados son: "<<y;
    return 0;
}
