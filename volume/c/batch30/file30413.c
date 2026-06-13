// fichero 30413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30413;

Registro30413 crear_registro30413(int id) {
    Registro30413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30413(Registro30413 r) {
    return r.valor + r.id;
}
