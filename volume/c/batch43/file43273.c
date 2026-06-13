// fichero 43273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43273;

Registro43273 crear_registro43273(int id) {
    Registro43273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43273(Registro43273 r) {
    return r.valor + r.id;
}
