// fichero 34217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34217;

Registro34217 crear_registro34217(int id) {
    Registro34217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34217(Registro34217 r) {
    return r.valor + r.id;
}
