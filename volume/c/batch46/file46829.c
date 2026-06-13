// fichero 46829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46829;

Registro46829 crear_registro46829(int id) {
    Registro46829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46829(Registro46829 r) {
    return r.valor + r.id;
}
