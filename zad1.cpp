#include <iostream>
#include <string>
#include <fstream>

using namespace std;

long long dzialanie(long long a, long long b, string znak)
{
    long long wynik;
    if(b==5)
        wynik=a;
    else
    {
        if(znak=="+")
            wynik=a+b;
        else if(znak=="-")
            wynik=a-b;
        else if(znak=="*")
            wynik=a*b;
        else if(znak=="^")
        {
            wynik=a;
            for(int i=1; i<b; i++)
                wynik=wynik*a;
            if(b==0)
                wynik=1;
        }
        else if(znak=="/")
            wynik=a/b;
        else if(znak=="&")
        {
            if(a%b==0)
                wynik=a*b;
            else
                wynik=a-b;
        }
    }
    return wynik;
}

int main()
{
    ifstream in;
    in.open("in4.txt");
    ofstream out;
    out.open("out4.txt");
    long long a;
    long long b;
    long long wynik;
    string znak;
    do
    {
        in >> a >> znak >> b;
        if(a==5)
            wynik=0;
        else
            wynik=dzialanie(a,b,znak);
        in >> znak;
        while(znak!="==")
        {
            if(znak=="=")
            {
                out << wynik << endl;
                break;
            }
            else
            {
                in >> a;
                wynik=dzialanie(wynik,a,znak);
                in >> znak;
            }
        }
    }
    while(znak!="==");
    out << wynik;
    in.close();
    return 0;
}
