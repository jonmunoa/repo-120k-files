// fichero 14549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14549;

Registro14549 crear_registro14549(int id) {
    Registro14549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14549(Registro14549 r) {
    return r.valor + r.id;
}
