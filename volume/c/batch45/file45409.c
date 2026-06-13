// fichero 45409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45409;

Registro45409 crear_registro45409(int id) {
    Registro45409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45409(Registro45409 r) {
    return r.valor + r.id;
}
