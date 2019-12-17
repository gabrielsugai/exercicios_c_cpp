#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    double A,B,C;
    cin>>A>>B>>C;
    if(A >= (B+C))
    {
    	cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else if((pow(A,2)) == (pow(B,2)+pow(C,2)))
    {
    	cout<<"TRIANGULO RETANGULO"<<endl;
    }
    else if((pow(A,2)) > (pow(B,2)+pow(C,2)))
    {
    	cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    else if((pow(A,2)) < (pow(B,2)+pow(C,2)))
    {
    	cout<<"TRIANGULO ACUTANGULO"<<endl;
    }

    if(A==B && A==C)
    {
    	cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    else if(A==B && A!=C)
    {
    	cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    else if(A==C && A!=B)
    {
    	cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    else if(B==C && A!=B)
    {
    	cout<<"TRIANGULO ISOSCELES"<<endl;
    }
        return 0;
}