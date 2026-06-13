// fichero 45297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45297;

Registro45297 crear_registro45297(int id) {
    Registro45297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45297(Registro45297 r) {
    return r.valor + r.id;
}
