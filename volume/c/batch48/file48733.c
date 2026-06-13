// fichero 48733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48733;

Registro48733 crear_registro48733(int id) {
    Registro48733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48733(Registro48733 r) {
    return r.valor + r.id;
}
