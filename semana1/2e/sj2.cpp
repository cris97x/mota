#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int GT=0;
int A,B,C,X,Y,Z;// ELEMENTOS
int e[100];


int main()
{
	for ( Y = 0; Y <A - 3; Y++) 
{ 
    for ( Y= C + 1; A <=A - 2; Y++) 
    {           
        for ( X = Y + 1; X <=A - 1; X++) 
        {
            for ( Z = X + 1; Z < A; Z++) 
        
            if (e[C] + e[Y] + e[X] + e[Z] == B)
            if(GT ==0 ){
                cout << Y+1<<", " << Y+1  
                     << ", " << X+1 << ", " << Z+1<<endl;
                     GT+=+1;
					 }
		}
	}  
} 

	int A=sizeof(e) / sizeof(e[0]);
{
	cout<<"\n ESCRIBA EL NUMERO DE ELEMENTOS EN EL ARREGLO Y SUMA DESEADA: ";
	cin>>A>>B;
	cout<<"\n ESCRIBE EL NUMERO DE ELEMENTOS DEL ARREGLO: ";
	for(C=1;C<=A;C++)
	{
		cin>>e[C];

}
}
	if(GT==0)
	{
		cout<<"\n ES IMPOSIBLE";
	}
	return 0;
}
