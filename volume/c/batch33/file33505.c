// fichero 33505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33505;

Registro33505 crear_registro33505(int id) {
    Registro33505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33505(Registro33505 r) {
    return r.valor + r.id;
}
