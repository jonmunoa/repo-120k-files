// fichero 43209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43209;

Registro43209 crear_registro43209(int id) {
    Registro43209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43209(Registro43209 r) {
    return r.valor + r.id;
}
