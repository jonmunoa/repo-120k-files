// fichero 24349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24349;

Registro24349 crear_registro24349(int id) {
    Registro24349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24349(Registro24349 r) {
    return r.valor + r.id;
}
