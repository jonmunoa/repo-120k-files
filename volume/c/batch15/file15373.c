// fichero 15373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15373;

Registro15373 crear_registro15373(int id) {
    Registro15373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15373(Registro15373 r) {
    return r.valor + r.id;
}
