#include <iostream>

using namespace std;

void printArray(int arreglo[], int tam){
    for (int k = 0; k < tam; k++) {
        cout << arreglo[k] << "\n";
    }
}
/**
 * Método de burbúja
 * @param arreglo
 * @param tam
 */
void burbujaUp(int arreglo[], int tam) {
    int auxi;
    for (int i = 0; i < (tam); i++) {
        for (int j = 0; j < (tam) - 1; j++) {
            //efectuando cambios
            if (arreglo[j] > arreglo[j + 1]) {
                auxi = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = auxi;
            }
        }
    }
}


int main() {
    int arreglo[] = {3, 34, 1, 53, 15, 6};
    int tam = sizeof(arreglo) / sizeof(int);
    cout<<"Arreglo desordenado.\n";
    printArray(arreglo,tam);
    burbujaUp(arreglo, tam);
    cout<<"Arreglo ordenado ascendentemente.\n";
    printArray(arreglo,tam);
    return 0;
}
