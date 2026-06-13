// fichero 48469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48469;

Registro48469 crear_registro48469(int id) {
    Registro48469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48469(Registro48469 r) {
    return r.valor + r.id;
}
