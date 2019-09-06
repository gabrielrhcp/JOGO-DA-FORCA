#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    char palavra[50], dica[50], aux[50], letra;
    int chance = 6,tam = 0,i = 0,j,cont = 0;
    bool cond = true;

    cout << "Uma pessoa digita uma palavra e a dica, enquanto outra tenta advinhar.\nCada '-' simboliza uma letra da palavra.\n\n";
    cout << "Digite a palavra: ";
    cin >> palavra;
    cout << "Digite a dica: ";
    cin >> dica;

    while(palavra[i] != '\0'){
        ++tam;
        ++i;
    }

    for(int i=0; i<tam; ++i){
        aux[i]='-';
    }

    inicio:

        system("cls");

        cond = (cont == tam) ? false : true;

        if(cond){
            if(chance == 5){
                cout << "  o " << endl;
            }else if(chance == 4){
                cout << "  o\n /  "  << endl;
            }else if(chance == 3){
                cout << "  o\n /|  "  << endl;
            }else if(chance == 2){
                cout << "  o " << endl << " /|\\ \n" ;
            }else if(chance == 1){
                cout << "  o " << endl << " /|\\"  << endl << " /";
            }

            cout << "\nDica: " << dica;

            cout << "\nPalavra: ";

            for(int i=0; i<tam;++i){
                cout << aux[i];
            }

            cout << "\n\nDigite uma letra: ";
            cin >> letra;



            for(int i=0; i<tam;++i){
                if(palavra[i] == letra){
                    aux[i] = palavra[i];
                    cont++;
                    j = i;
                    while(j < tam){
                        j++;
                        if(palavra[j] == letra){
                            aux[j] = palavra[j];
                            cont++;
                        }

                    }
                    goto inicio;
                }
            }

            chance--;
            if(chance > 0){
                goto inicio;
            }else{
                system("cls");
                if(chance == 5){
                cout << "  o " << endl;
            }else if(chance == 4){
                cout << "  o\n /  "  << endl;
            }else if(chance == 3){
                cout << "  o\n /|  "  << endl;
            }else if(chance == 2){
                cout << "  o " << endl << " /|\\" ;
            }else if(chance == 1){
                cout << "  o " << endl << " /|\\"  << endl << " /";
            }else if(chance == 0){
                 cout << "  o " << endl << " /|\\"  << endl << " / \\";
            }
            }
        }


    cout << "\nA palavra era: " << palavra<<endl;


}


