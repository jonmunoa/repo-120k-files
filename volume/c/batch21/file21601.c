// fichero 21601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21601;

Registro21601 crear_registro21601(int id) {
    Registro21601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21601(Registro21601 r) {
    return r.valor + r.id;
}
