#include<iostream>

using namespace std;

int pa(int a)//par
{
	int m=a/2;
return m;
}
int im(int a)//impar
{
	int m=(a*3)+1;
return m;
}
int sc(int a)//sel

{
	if(a%2==0){
		a=pa(a);
		cout<<a<<" ";}
	else{
		a=pa(a);
		cout<<a<<" ";}
return a;
}
int main()
{
	int a;
cin>>a;
	if(a>=1&&a<=1000000){
		cout<<a<<" ";
		while(a!=1)
		a=sc(a);}
	else
		return 0;

}
