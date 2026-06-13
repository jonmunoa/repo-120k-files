// fichero 48829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48829;

Registro48829 crear_registro48829(int id) {
    Registro48829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48829(Registro48829 r) {
    return r.valor + r.id;
}
