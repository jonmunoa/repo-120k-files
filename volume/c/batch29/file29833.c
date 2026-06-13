// fichero 29833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29833;

Registro29833 crear_registro29833(int id) {
    Registro29833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29833(Registro29833 r) {
    return r.valor + r.id;
}
