// fichero 413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro413;

Registro413 crear_registro413(int id) {
    Registro413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro413(Registro413 r) {
    return r.valor + r.id;
}
