// fichero 30141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30141;

Registro30141 crear_registro30141(int id) {
    Registro30141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30141(Registro30141 r) {
    return r.valor + r.id;
}
