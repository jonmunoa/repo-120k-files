// fichero 45721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45721;

Registro45721 crear_registro45721(int id) {
    Registro45721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45721(Registro45721 r) {
    return r.valor + r.id;
}
