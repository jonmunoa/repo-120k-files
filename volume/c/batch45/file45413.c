// fichero 45413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45413;

Registro45413 crear_registro45413(int id) {
    Registro45413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45413(Registro45413 r) {
    return r.valor + r.id;
}
