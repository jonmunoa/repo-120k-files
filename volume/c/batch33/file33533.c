// fichero 33533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33533;

Registro33533 crear_registro33533(int id) {
    Registro33533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33533(Registro33533 r) {
    return r.valor + r.id;
}
