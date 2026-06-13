// fichero 20389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20389;

Registro20389 crear_registro20389(int id) {
    Registro20389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20389(Registro20389 r) {
    return r.valor + r.id;
}
