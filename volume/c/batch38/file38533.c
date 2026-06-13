// fichero 38533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38533;

Registro38533 crear_registro38533(int id) {
    Registro38533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38533(Registro38533 r) {
    return r.valor + r.id;
}
