// fichero 385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro385;

Registro385 crear_registro385(int id) {
    Registro385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro385(Registro385 r) {
    return r.valor + r.id;
}
