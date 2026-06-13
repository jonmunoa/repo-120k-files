// fichero 14313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14313;

Registro14313 crear_registro14313(int id) {
    Registro14313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14313(Registro14313 r) {
    return r.valor + r.id;
}
