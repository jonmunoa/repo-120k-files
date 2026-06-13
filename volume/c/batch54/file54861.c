// fichero 54861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54861;

Registro54861 crear_registro54861(int id) {
    Registro54861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54861(Registro54861 r) {
    return r.valor + r.id;
}
