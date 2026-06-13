// fichero 37537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37537;

Registro37537 crear_registro37537(int id) {
    Registro37537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37537(Registro37537 r) {
    return r.valor + r.id;
}
