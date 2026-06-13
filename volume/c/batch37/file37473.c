// fichero 37473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37473;

Registro37473 crear_registro37473(int id) {
    Registro37473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37473(Registro37473 r) {
    return r.valor + r.id;
}
