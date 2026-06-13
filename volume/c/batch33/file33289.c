// fichero 33289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33289;

Registro33289 crear_registro33289(int id) {
    Registro33289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33289(Registro33289 r) {
    return r.valor + r.id;
}
