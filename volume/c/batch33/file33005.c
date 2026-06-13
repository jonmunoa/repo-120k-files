// fichero 33005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33005;

Registro33005 crear_registro33005(int id) {
    Registro33005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33005(Registro33005 r) {
    return r.valor + r.id;
}
