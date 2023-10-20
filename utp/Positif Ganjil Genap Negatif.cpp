#include <iostream>
using namespace std;

int main() 
{
    int nilai;
    cin >> nilai;
    
    if (nilai < 0)
    {
        cout <<"Negatif"<< endl;
    }
    else if (nilai % 2 == 0)
    {
        cout << "Positif Genap"<< endl;
    }
    else 
    {
        cout <<"Positif Ganjil"<< endl;
    }

}