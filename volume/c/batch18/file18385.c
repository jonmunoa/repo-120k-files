// fichero 18385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18385;

Registro18385 crear_registro18385(int id) {
    Registro18385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18385(Registro18385 r) {
    return r.valor + r.id;
}
