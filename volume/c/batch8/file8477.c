// fichero 8477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8477;

Registro8477 crear_registro8477(int id) {
    Registro8477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8477(Registro8477 r) {
    return r.valor + r.id;
}
