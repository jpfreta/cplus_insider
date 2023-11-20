#include <iostream>
// Ponteiros economisar espaços na memória chamado geralmente de dentro da class
using namespace std;

void printTenTimes(const char* ptr)
{
    for(int i = 0 ; i < 10; ++i)
    {
        cout << ptr;
    }
}

int main ()
{
    const char* phrase = "\n\tOlá, Mundo!\n";
    printTenTimes(phrase);
    
    return 0;
}