// fichero 20413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20413;

Registro20413 crear_registro20413(int id) {
    Registro20413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20413(Registro20413 r) {
    return r.valor + r.id;
}
