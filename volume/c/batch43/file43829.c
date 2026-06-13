// fichero 43829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43829;

Registro43829 crear_registro43829(int id) {
    Registro43829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43829(Registro43829 r) {
    return r.valor + r.id;
}
