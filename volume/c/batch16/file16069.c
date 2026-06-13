// fichero 16069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16069;

Registro16069 crear_registro16069(int id) {
    Registro16069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16069(Registro16069 r) {
    return r.valor + r.id;
}
