// fichero 20853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20853;

Registro20853 crear_registro20853(int id) {
    Registro20853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20853(Registro20853 r) {
    return r.valor + r.id;
}
