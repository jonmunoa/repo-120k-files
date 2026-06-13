// fichero 45833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45833;

Registro45833 crear_registro45833(int id) {
    Registro45833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45833(Registro45833 r) {
    return r.valor + r.id;
}
