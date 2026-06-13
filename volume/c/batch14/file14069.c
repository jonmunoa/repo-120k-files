// fichero 14069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14069;

Registro14069 crear_registro14069(int id) {
    Registro14069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14069(Registro14069 r) {
    return r.valor + r.id;
}
