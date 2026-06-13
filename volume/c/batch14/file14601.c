// fichero 14601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14601;

Registro14601 crear_registro14601(int id) {
    Registro14601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14601(Registro14601 r) {
    return r.valor + r.id;
}
