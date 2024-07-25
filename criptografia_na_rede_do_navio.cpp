#include <iostream>
#include <bitset>
using namespace std;


string binarioParaTexto(const string& binario) {
    string texto;
    for (size_t i = 0; i < binario.size(); i += 8) {
        // Pega um byte (8 bits)
        string byte = binario.substr(i, 8);
        // Converte o byte binário para número decimal
        char caractere = static_cast<char>(bitset<8>(byte).to_ulong());
        // Adiciona o caractere ao texto
        texto += caractere;
    }
    return texto;
}

int main()
{
    string msg = "10010110 11110111 01010110 00000001 00010111 00100110 01010111 00000001 00010111 01110110 01010111 00110110 11110111 11010111 01010111 00000011";
    string vetor1[1000];
    int j = 0;
    int index = 0;
    string aux;

    for(char c : msg){
        if(c != ' '){
            aux += c;
            //cout << aux << endl;
            j++;
        }
        if(j == 8) {
            vetor1[index++] = aux;
            aux = "";
            j = 0;
        }
    }

    for(int i = 0; i < index; i++) {
        if (vetor1[i][6] == '0') {
            vetor1[i][6] = '1';
        }else {
            vetor1[i][6] == '0';
        }
        if (vetor1[i][7] == '0') {
            vetor1[i][7] = '1';
        }else {
            vetor1[i][7] = '0';
        }
    }


    for(int i = 0; i < index; i++) {
        if(vetor1[i].length() == 8) {
            
            string primeiros4 = vetor1[i].substr(0, 4);
            string ultimos4 = vetor1[i].substr(4, 4);
            vetor1[i] = ultimos4 + primeiros4;
        }
    }

    /*for (int i = 0; i < index; i++) {
        cout << "vetor1[" << i << "] = " << vetor1[i] << endl;
    }*/

    // Converte todas as strings binárias do vetor em texto
    string binarioCompleto;
    for (int i = 0; i < index; i++) {
        binarioCompleto += vetor1[i];
    }

    string frase = binarioParaTexto(binarioCompleto);

    cout << "Frase gerada: " << frase << endl;


    return 0;
}