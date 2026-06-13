// fichero 38069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38069;

Registro38069 crear_registro38069(int id) {
    Registro38069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38069(Registro38069 r) {
    return r.valor + r.id;
}
