// fichero 48769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48769;

Registro48769 crear_registro48769(int id) {
    Registro48769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48769(Registro48769 r) {
    return r.valor + r.id;
}
