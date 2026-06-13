// fichero 15469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15469;

Registro15469 crear_registro15469(int id) {
    Registro15469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15469(Registro15469 r) {
    return r.valor + r.id;
}
