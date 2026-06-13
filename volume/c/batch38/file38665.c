// fichero 38665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38665;

Registro38665 crear_registro38665(int id) {
    Registro38665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38665(Registro38665 r) {
    return r.valor + r.id;
}
