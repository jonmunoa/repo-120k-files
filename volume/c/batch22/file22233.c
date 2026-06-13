// fichero 22233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22233;

Registro22233 crear_registro22233(int id) {
    Registro22233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22233(Registro22233 r) {
    return r.valor + r.id;
}
