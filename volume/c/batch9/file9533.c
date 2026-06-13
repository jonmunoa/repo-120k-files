// fichero 9533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9533;

Registro9533 crear_registro9533(int id) {
    Registro9533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9533(Registro9533 r) {
    return r.valor + r.id;
}
