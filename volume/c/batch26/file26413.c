// fichero 26413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26413;

Registro26413 crear_registro26413(int id) {
    Registro26413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26413(Registro26413 r) {
    return r.valor + r.id;
}
