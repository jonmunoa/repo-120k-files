// fichero 14929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14929;

Registro14929 crear_registro14929(int id) {
    Registro14929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14929(Registro14929 r) {
    return r.valor + r.id;
}
