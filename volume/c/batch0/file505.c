// fichero 505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro505;

Registro505 crear_registro505(int id) {
    Registro505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro505(Registro505 r) {
    return r.valor + r.id;
}
