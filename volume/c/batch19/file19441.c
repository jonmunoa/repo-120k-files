// fichero 19441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19441;

Registro19441 crear_registro19441(int id) {
    Registro19441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19441(Registro19441 r) {
    return r.valor + r.id;
}
