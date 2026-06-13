// fichero 4385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4385;

Registro4385 crear_registro4385(int id) {
    Registro4385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4385(Registro4385 r) {
    return r.valor + r.id;
}
