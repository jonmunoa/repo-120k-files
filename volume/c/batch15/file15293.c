// fichero 15293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15293;

Registro15293 crear_registro15293(int id) {
    Registro15293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15293(Registro15293 r) {
    return r.valor + r.id;
}
