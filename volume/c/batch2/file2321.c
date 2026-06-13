// fichero 2321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2321;

Registro2321 crear_registro2321(int id) {
    Registro2321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2321(Registro2321 r) {
    return r.valor + r.id;
}
