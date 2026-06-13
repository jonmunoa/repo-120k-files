// fichero 43885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43885;

Registro43885 crear_registro43885(int id) {
    Registro43885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43885(Registro43885 r) {
    return r.valor + r.id;
}
