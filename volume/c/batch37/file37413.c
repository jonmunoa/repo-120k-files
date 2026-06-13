// fichero 37413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37413;

Registro37413 crear_registro37413(int id) {
    Registro37413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37413(Registro37413 r) {
    return r.valor + r.id;
}
