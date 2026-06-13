// fichero 33921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33921;

Registro33921 crear_registro33921(int id) {
    Registro33921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33921(Registro33921 r) {
    return r.valor + r.id;
}
