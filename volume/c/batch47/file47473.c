// fichero 47473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47473;

Registro47473 crear_registro47473(int id) {
    Registro47473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47473(Registro47473 r) {
    return r.valor + r.id;
}
