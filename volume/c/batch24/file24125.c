// fichero 24125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24125;

Registro24125 crear_registro24125(int id) {
    Registro24125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24125(Registro24125 r) {
    return r.valor + r.id;
}
