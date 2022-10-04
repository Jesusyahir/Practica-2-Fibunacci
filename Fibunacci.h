#include <cstdlib>
#include <iostream>
using namespace std;

class Fibunacci
{
	private:
			int n1,N;		
	public:
		Serie () {n1=0;N=0;}
		void setn(int N);
		int CalcularFibunacciIterativa(int n1);
		int CalcularFibunacciRecursiva(int N);
};
int Fibunacci::CalcularFibunacciIterativa(int n1){
	int f2=0,g2=1, h1=1;
	for (int i=0;i<=f2;i++){
		do	{
		cout<< i << "\t";
			h1= f2 + g2;
			f2= g2;
			g2= h1;
			i= f2;
			} while (f2<=h1);
		}
}
int Fibunacci::CalcularFibunacciRecursiva(int N){
	if (N < 2)
	return N;
	return 	CalcularFibunacciRecursiva(N - 1 ) + CalcularFibunacciRecursiva(N - 2 );
}
