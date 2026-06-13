// fichero 15585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15585;

Registro15585 crear_registro15585(int id) {
    Registro15585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15585(Registro15585 r) {
    return r.valor + r.id;
}
