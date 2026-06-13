// fichero 46381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46381;

Registro46381 crear_registro46381(int id) {
    Registro46381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46381(Registro46381 r) {
    return r.valor + r.id;
}
