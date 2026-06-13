// fichero 43585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43585;

Registro43585 crear_registro43585(int id) {
    Registro43585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43585(Registro43585 r) {
    return r.valor + r.id;
}
