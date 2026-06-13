// fichero 54321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54321;

Registro54321 crear_registro54321(int id) {
    Registro54321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54321(Registro54321 r) {
    return r.valor + r.id;
}
