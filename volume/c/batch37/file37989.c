// fichero 37989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37989;

Registro37989 crear_registro37989(int id) {
    Registro37989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37989(Registro37989 r) {
    return r.valor + r.id;
}
