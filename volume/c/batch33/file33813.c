// fichero 33813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33813;

Registro33813 crear_registro33813(int id) {
    Registro33813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33813(Registro33813 r) {
    return r.valor + r.id;
}
