// fichero 22141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22141;

Registro22141 crear_registro22141(int id) {
    Registro22141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22141(Registro22141 r) {
    return r.valor + r.id;
}
