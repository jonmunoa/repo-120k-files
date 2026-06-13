// fichero 45481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45481;

Registro45481 crear_registro45481(int id) {
    Registro45481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45481(Registro45481 r) {
    return r.valor + r.id;
}
