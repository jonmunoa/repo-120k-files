// fichero 37297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37297;

Registro37297 crear_registro37297(int id) {
    Registro37297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37297(Registro37297 r) {
    return r.valor + r.id;
}
