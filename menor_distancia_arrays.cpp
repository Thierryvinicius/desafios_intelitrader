#include <iostream>
#include <climits>

using namespace std;

int main()
{
    
    int vetor1[] = {53, 12, 89, 34, 7, 77, 45, 22, 90, 67};
    int vetor2[] = {19, 84, 3, 62, 27, 55, 41, 11, 70, 98};
    int tamanho_vetor = sizeof(vetor1) / sizeof(vetor1[0]);
    int dif, a, b;
    int menor_dif = INT_MAX; //apenas inicializando com um valor muito alto

 
    for (int i=0; i < tamanho_vetor; i++) {
        for (int j=0; j < tamanho_vetor; j++) {
            dif = abs(vetor1[i] - vetor2[j]);
            if (dif < menor_dif) {
                menor_dif = dif;
                a = vetor1[i];
                b = vetor2[j];

            }
        }
    }
    cout << "A menor distancia eh entre " << a << "(array 1)"
    << " e " << b << "(array 2) " << "com uma distancia de " << menor_dif;
    
    return 0;
}