// fichero 30297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30297;

Registro30297 crear_registro30297(int id) {
    Registro30297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30297(Registro30297 r) {
    return r.valor + r.id;
}
