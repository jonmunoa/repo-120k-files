// fichero 35413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35413;

Registro35413 crear_registro35413(int id) {
    Registro35413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35413(Registro35413 r) {
    return r.valor + r.id;
}
