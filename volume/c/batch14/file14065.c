// fichero 14065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14065;

Registro14065 crear_registro14065(int id) {
    Registro14065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14065(Registro14065 r) {
    return r.valor + r.id;
}
