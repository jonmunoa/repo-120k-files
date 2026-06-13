// fichero 30833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30833;

Registro30833 crear_registro30833(int id) {
    Registro30833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30833(Registro30833 r) {
    return r.valor + r.id;
}
