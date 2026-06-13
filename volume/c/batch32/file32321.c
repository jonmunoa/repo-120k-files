// fichero 32321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32321;

Registro32321 crear_registro32321(int id) {
    Registro32321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32321(Registro32321 r) {
    return r.valor + r.id;
}
