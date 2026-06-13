// fichero 45389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45389;

Registro45389 crear_registro45389(int id) {
    Registro45389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45389(Registro45389 r) {
    return r.valor + r.id;
}
