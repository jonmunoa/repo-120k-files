// fichero 22477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22477;

Registro22477 crear_registro22477(int id) {
    Registro22477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22477(Registro22477 r) {
    return r.valor + r.id;
}
