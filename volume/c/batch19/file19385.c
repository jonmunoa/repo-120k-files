// fichero 19385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19385;

Registro19385 crear_registro19385(int id) {
    Registro19385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19385(Registro19385 r) {
    return r.valor + r.id;
}
