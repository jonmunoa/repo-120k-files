// fichero 33061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33061;

Registro33061 crear_registro33061(int id) {
    Registro33061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33061(Registro33061 r) {
    return r.valor + r.id;
}
