#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


using namespace std;

void decimalparabinario(int decimal);
void binarioparadecimal(int binario);
float pow();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    do {
    cout << "----> 1 converter decimal para binário" << endl;
    cout << "----> 2 converter binário para decimal" << endl;
    cout << "----> 3 Para sair digite" << endl;
    cin >> opcao;

    system("clear|cls");
    if(opcao == 1){
        cout << "Entrou em decimal para binário" << endl;
        int decimal;
        cout << "Digite o valor em decimal:" << endl;
        cin >> decimal;
        cout << "Número digitado: " << decimal << endl;
        decimalparabinario(decimal);
         Sleep(2000);
         system("clear|cls");
         return 0;
        }
        else if (opcao == 2)
        {
        cout << "Entrou em binário para decimal" << endl;
        int binario;
        cout << "Digite o valor em binário:" << endl;
        cin >> binario;
        cout << "Número digitado: " << binario << endl;
        binarioparadecimal(binario);
        Sleep(2000);
        system("clear|cls");
        return 0;
        }
        else if (opcao == 3){
                cout << "Você escolheu sair do programa." << endl;
            break;
        }
        else {
        cout << "Opção inválida" << endl;
        }
    } while (opcao == 1 || opcao == 2);
}
void decimalparabinario(int decimal){
        int n;
        if(decimal/2!=0){
            n=decimal/2;
            decimalparabinario(n);
            printf("%d", decimal%2);
        }else{
        printf("%d", decimal%2);
        }
    }
void binarioparadecimal(int binario){
        int j, sobra, resultado = 0;
        for(j = 0; j < 6; j++){
            sobra = binario - ((binario / 10)*10);
            binario = binario / 10;
            resultado += sobra * pow(2,j);
        }
        printf("Decimal: %i \n", resultado);

    }


