// fichero 549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro549;

Registro549 crear_registro549(int id) {
    Registro549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro549(Registro549 r) {
    return r.valor + r.id;
}
