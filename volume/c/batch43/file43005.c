// fichero 43005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43005;

Registro43005 crear_registro43005(int id) {
    Registro43005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43005(Registro43005 r) {
    return r.valor + r.id;
}
