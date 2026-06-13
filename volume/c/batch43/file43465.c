// fichero 43465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43465;

Registro43465 crear_registro43465(int id) {
    Registro43465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43465(Registro43465 r) {
    return r.valor + r.id;
}
