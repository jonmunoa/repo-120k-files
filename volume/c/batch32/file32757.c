// fichero 32757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32757;

Registro32757 crear_registro32757(int id) {
    Registro32757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32757(Registro32757 r) {
    return r.valor + r.id;
}
