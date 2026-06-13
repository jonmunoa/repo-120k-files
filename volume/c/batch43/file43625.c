// fichero 43625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43625;

Registro43625 crear_registro43625(int id) {
    Registro43625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43625(Registro43625 r) {
    return r.valor + r.id;
}
