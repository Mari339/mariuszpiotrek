#include <iostream>
#include <string>

using namespace std;

long long dzialanie(long long a, long long b, string znak)
{
    long long wynik;
    if(znak=="+")
        wynik=a+b;
    else if(znak=="-")
        wynik=a-b;
    else if(znak=="*")
        wynik=a*b;
    else if(znak=="^")
    {
        wynik=a;
        for(int i=1;i<b;i++)
            wynik=wynik*a;
        if(b==0)
            wynik=1;
    }
    else if(znak=="/")
        wynik=a/b;
    return wynik;
}

int main()
{
    long long a;
    long long b;
    long long wynik;
    string znak;
    do
    {
        cin >> a >> znak >> b;
        wynik=dzialanie(a,b,znak);
        cin >> znak;
        while(znak!="==")
        {
            if(znak=="=")
            {
                cout << wynik << endl;
                break;
            }
            else
            {
            cin >> a;
            wynik=dzialanie(wynik,a,znak);
            cin >> znak;
            }
        }
    }while(znak!="==");
    cout << wynik;
    return 0;
}
