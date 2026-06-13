// fichero 43889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43889;

Registro43889 crear_registro43889(int id) {
    Registro43889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43889(Registro43889 r) {
    return r.valor + r.id;
}
