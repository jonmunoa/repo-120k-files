// fichero 45273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45273;

Registro45273 crear_registro45273(int id) {
    Registro45273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45273(Registro45273 r) {
    return r.valor + r.id;
}
