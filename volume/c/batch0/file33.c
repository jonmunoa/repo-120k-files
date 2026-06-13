// fichero 33 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33;

Registro33 crear_registro33(int id) {
    Registro33 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33(Registro33 r) {
    return r.valor + r.id;
}
