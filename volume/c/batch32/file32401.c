// fichero 32401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32401;

Registro32401 crear_registro32401(int id) {
    Registro32401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32401(Registro32401 r) {
    return r.valor + r.id;
}
