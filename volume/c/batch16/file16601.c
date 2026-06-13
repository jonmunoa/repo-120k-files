// fichero 16601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16601;

Registro16601 crear_registro16601(int id) {
    Registro16601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16601(Registro16601 r) {
    return r.valor + r.id;
}
