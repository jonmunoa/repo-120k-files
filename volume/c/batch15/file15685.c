// fichero 15685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15685;

Registro15685 crear_registro15685(int id) {
    Registro15685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15685(Registro15685 r) {
    return r.valor + r.id;
}
