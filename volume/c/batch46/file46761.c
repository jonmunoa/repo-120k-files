// fichero 46761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46761;

Registro46761 crear_registro46761(int id) {
    Registro46761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46761(Registro46761 r) {
    return r.valor + r.id;
}
