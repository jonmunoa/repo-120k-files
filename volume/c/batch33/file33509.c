// fichero 33509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33509;

Registro33509 crear_registro33509(int id) {
    Registro33509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33509(Registro33509 r) {
    return r.valor + r.id;
}
