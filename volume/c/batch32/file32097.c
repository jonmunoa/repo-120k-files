// fichero 32097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32097;

Registro32097 crear_registro32097(int id) {
    Registro32097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32097(Registro32097 r) {
    return r.valor + r.id;
}
