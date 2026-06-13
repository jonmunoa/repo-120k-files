// fichero 48165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48165;

Registro48165 crear_registro48165(int id) {
    Registro48165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48165(Registro48165 r) {
    return r.valor + r.id;
}
