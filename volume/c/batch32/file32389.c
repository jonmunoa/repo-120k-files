// fichero 32389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32389;

Registro32389 crear_registro32389(int id) {
    Registro32389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32389(Registro32389 r) {
    return r.valor + r.id;
}
