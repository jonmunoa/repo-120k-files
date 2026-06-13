// fichero 14321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14321;

Registro14321 crear_registro14321(int id) {
    Registro14321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14321(Registro14321 r) {
    return r.valor + r.id;
}
