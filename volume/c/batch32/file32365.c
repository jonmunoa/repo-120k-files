// fichero 32365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32365;

Registro32365 crear_registro32365(int id) {
    Registro32365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32365(Registro32365 r) {
    return r.valor + r.id;
}
