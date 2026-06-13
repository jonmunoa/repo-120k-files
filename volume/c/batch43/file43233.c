// fichero 43233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43233;

Registro43233 crear_registro43233(int id) {
    Registro43233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43233(Registro43233 r) {
    return r.valor + r.id;
}
