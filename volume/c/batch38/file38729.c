// fichero 38729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38729;

Registro38729 crear_registro38729(int id) {
    Registro38729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38729(Registro38729 r) {
    return r.valor + r.id;
}
