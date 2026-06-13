// fichero 48533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48533;

Registro48533 crear_registro48533(int id) {
    Registro48533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48533(Registro48533 r) {
    return r.valor + r.id;
}
