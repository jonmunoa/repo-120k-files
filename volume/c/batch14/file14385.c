// fichero 14385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14385;

Registro14385 crear_registro14385(int id) {
    Registro14385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14385(Registro14385 r) {
    return r.valor + r.id;
}
