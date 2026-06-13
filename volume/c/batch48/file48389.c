// fichero 48389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48389;

Registro48389 crear_registro48389(int id) {
    Registro48389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48389(Registro48389 r) {
    return r.valor + r.id;
}
