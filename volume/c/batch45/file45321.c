// fichero 45321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45321;

Registro45321 crear_registro45321(int id) {
    Registro45321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45321(Registro45321 r) {
    return r.valor + r.id;
}
