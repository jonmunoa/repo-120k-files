// fichero 54801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54801;

Registro54801 crear_registro54801(int id) {
    Registro54801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54801(Registro54801 r) {
    return r.valor + r.id;
}
