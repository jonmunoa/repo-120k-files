// fichero 43045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43045;

Registro43045 crear_registro43045(int id) {
    Registro43045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43045(Registro43045 r) {
    return r.valor + r.id;
}
