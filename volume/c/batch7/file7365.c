// fichero 7365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7365;

Registro7365 crear_registro7365(int id) {
    Registro7365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7365(Registro7365 r) {
    return r.valor + r.id;
}
