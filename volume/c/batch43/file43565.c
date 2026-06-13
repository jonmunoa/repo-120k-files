// fichero 43565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43565;

Registro43565 crear_registro43565(int id) {
    Registro43565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43565(Registro43565 r) {
    return r.valor + r.id;
}
