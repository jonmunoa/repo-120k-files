// fichero 45825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45825;

Registro45825 crear_registro45825(int id) {
    Registro45825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45825(Registro45825 r) {
    return r.valor + r.id;
}
