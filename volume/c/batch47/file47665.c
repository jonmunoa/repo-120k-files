// fichero 47665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47665;

Registro47665 crear_registro47665(int id) {
    Registro47665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47665(Registro47665 r) {
    return r.valor + r.id;
}
