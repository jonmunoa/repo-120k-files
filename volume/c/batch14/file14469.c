// fichero 14469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14469;

Registro14469 crear_registro14469(int id) {
    Registro14469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14469(Registro14469 r) {
    return r.valor + r.id;
}
