// fichero 15533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15533;

Registro15533 crear_registro15533(int id) {
    Registro15533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15533(Registro15533 r) {
    return r.valor + r.id;
}
