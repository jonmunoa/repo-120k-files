// fichero 37045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37045;

Registro37045 crear_registro37045(int id) {
    Registro37045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37045(Registro37045 r) {
    return r.valor + r.id;
}
