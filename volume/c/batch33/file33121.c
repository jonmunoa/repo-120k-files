// fichero 33121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33121;

Registro33121 crear_registro33121(int id) {
    Registro33121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33121(Registro33121 r) {
    return r.valor + r.id;
}
