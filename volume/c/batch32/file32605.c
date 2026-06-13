// fichero 32605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32605;

Registro32605 crear_registro32605(int id) {
    Registro32605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32605(Registro32605 r) {
    return r.valor + r.id;
}
