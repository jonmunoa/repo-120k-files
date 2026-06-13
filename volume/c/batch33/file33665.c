// fichero 33665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33665;

Registro33665 crear_registro33665(int id) {
    Registro33665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33665(Registro33665 r) {
    return r.valor + r.id;
}
