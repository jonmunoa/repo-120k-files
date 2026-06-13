// fichero 31813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31813;

Registro31813 crear_registro31813(int id) {
    Registro31813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31813(Registro31813 r) {
    return r.valor + r.id;
}
