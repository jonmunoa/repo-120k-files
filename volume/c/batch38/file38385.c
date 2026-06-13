// fichero 38385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38385;

Registro38385 crear_registro38385(int id) {
    Registro38385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38385(Registro38385 r) {
    return r.valor + r.id;
}
