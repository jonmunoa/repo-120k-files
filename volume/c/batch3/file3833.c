// fichero 3833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3833;

Registro3833 crear_registro3833(int id) {
    Registro3833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3833(Registro3833 r) {
    return r.valor + r.id;
}
