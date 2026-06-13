// fichero 43297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43297;

Registro43297 crear_registro43297(int id) {
    Registro43297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43297(Registro43297 r) {
    return r.valor + r.id;
}
