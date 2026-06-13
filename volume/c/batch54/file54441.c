// fichero 54441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54441;

Registro54441 crear_registro54441(int id) {
    Registro54441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54441(Registro54441 r) {
    return r.valor + r.id;
}
