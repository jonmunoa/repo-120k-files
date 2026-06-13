// fichero 46237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46237;

Registro46237 crear_registro46237(int id) {
    Registro46237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46237(Registro46237 r) {
    return r.valor + r.id;
}
