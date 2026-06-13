// fichero 33825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33825;

Registro33825 crear_registro33825(int id) {
    Registro33825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33825(Registro33825 r) {
    return r.valor + r.id;
}
