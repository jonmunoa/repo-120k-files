// fichero 43749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43749;

Registro43749 crear_registro43749(int id) {
    Registro43749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43749(Registro43749 r) {
    return r.valor + r.id;
}
