// fichero 1349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1349;

Registro1349 crear_registro1349(int id) {
    Registro1349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1349(Registro1349 r) {
    return r.valor + r.id;
}
