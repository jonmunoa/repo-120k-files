// fichero 37145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37145;

Registro37145 crear_registro37145(int id) {
    Registro37145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37145(Registro37145 r) {
    return r.valor + r.id;
}
