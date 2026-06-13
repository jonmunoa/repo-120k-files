// fichero 54949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54949;

Registro54949 crear_registro54949(int id) {
    Registro54949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54949(Registro54949 r) {
    return r.valor + r.id;
}
