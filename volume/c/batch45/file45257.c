// fichero 45257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45257;

Registro45257 crear_registro45257(int id) {
    Registro45257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45257(Registro45257 r) {
    return r.valor + r.id;
}
