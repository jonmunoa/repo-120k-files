// fichero 32721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32721;

Registro32721 crear_registro32721(int id) {
    Registro32721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32721(Registro32721 r) {
    return r.valor + r.id;
}
