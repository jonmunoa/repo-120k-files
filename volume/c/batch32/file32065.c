// fichero 32065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32065;

Registro32065 crear_registro32065(int id) {
    Registro32065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32065(Registro32065 r) {
    return r.valor + r.id;
}
