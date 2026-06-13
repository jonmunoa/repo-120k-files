// fichero 30889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30889;

Registro30889 crear_registro30889(int id) {
    Registro30889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30889(Registro30889 r) {
    return r.valor + r.id;
}
