// fichero 33833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33833;

Registro33833 crear_registro33833(int id) {
    Registro33833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33833(Registro33833 r) {
    return r.valor + r.id;
}
