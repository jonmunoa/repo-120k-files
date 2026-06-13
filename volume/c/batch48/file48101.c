// fichero 48101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48101;

Registro48101 crear_registro48101(int id) {
    Registro48101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48101(Registro48101 r) {
    return r.valor + r.id;
}
