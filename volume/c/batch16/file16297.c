// fichero 16297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16297;

Registro16297 crear_registro16297(int id) {
    Registro16297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16297(Registro16297 r) {
    return r.valor + r.id;
}
