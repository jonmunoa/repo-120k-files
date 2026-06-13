// fichero 32561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32561;

Registro32561 crear_registro32561(int id) {
    Registro32561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32561(Registro32561 r) {
    return r.valor + r.id;
}
