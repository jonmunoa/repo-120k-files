// fichero 30073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30073;

Registro30073 crear_registro30073(int id) {
    Registro30073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30073(Registro30073 r) {
    return r.valor + r.id;
}
