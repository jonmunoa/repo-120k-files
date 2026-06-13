// fichero 32037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32037;

Registro32037 crear_registro32037(int id) {
    Registro32037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32037(Registro32037 r) {
    return r.valor + r.id;
}
