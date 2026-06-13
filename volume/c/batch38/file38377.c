// fichero 38377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38377;

Registro38377 crear_registro38377(int id) {
    Registro38377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38377(Registro38377 r) {
    return r.valor + r.id;
}
