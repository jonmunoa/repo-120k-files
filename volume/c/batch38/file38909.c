// fichero 38909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38909;

Registro38909 crear_registro38909(int id) {
    Registro38909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38909(Registro38909 r) {
    return r.valor + r.id;
}
