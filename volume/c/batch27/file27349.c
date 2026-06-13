// fichero 27349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27349;

Registro27349 crear_registro27349(int id) {
    Registro27349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27349(Registro27349 r) {
    return r.valor + r.id;
}
