// fichero 15801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15801;

Registro15801 crear_registro15801(int id) {
    Registro15801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15801(Registro15801 r) {
    return r.valor + r.id;
}
