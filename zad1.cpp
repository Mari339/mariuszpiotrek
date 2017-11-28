#include <iostream>
#include <string>

using namespace std;

long long dodawanie(long long a, long long b)
{
    return a+b;
}

long long odejmowanie(long long a, long long b)
{
    return a-b;
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
        if(znak=="+")
            wynik=dodawanie(a,b);
        else if(znak=="-")
            wynik=odejmowanie(a,b);
        cin >> znak;
        while(znak!="==")
        {
            if(znak=="=")
            {
                cout << wynik;
                break;
            }
            else
            {
            cin >> a;
            if(znak=="+")
                wynik=dodawanie(a,wynik);
            else if(znak=="-")
                wynik=odejmowanie(a,wynik);
            cin >> znak;
            }
        }
    }while(znak!="==");
    return 0;
}
