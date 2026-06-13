// fichero 15885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15885;

Registro15885 crear_registro15885(int id) {
    Registro15885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15885(Registro15885 r) {
    return r.valor + r.id;
}
