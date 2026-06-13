// fichero 33577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33577;

Registro33577 crear_registro33577(int id) {
    Registro33577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33577(Registro33577 r) {
    return r.valor + r.id;
}
