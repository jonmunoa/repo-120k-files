// fichero 43429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43429;

Registro43429 crear_registro43429(int id) {
    Registro43429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43429(Registro43429 r) {
    return r.valor + r.id;
}
